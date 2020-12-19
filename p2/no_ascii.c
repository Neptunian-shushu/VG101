#include "p2.h"
void no_ascii(int num_player, int initial_num, int n, int num_round, FILE* fp){
    int ch;
    print_initial(num_round, n, num_player);//print the initial images
    fprint_initial(num_round, n, num_player,fp);
    player *players = malloc(sizeof(player));
    player *cp_players = malloc(sizeof(player));
    player *pp = malloc(sizeof(player));
    Initialize(players);
    cp_players=players;
    for (int i = 1; i < num_player; ++i) {
        InsertLast(players);//initialize the players
        players=players->next;
        players->order = i;
    }
    players->next=cp_players;
    cp_players->last=players;
    players=players->next;//link the lists
    for (int j = 0; j < num_round; ++j) {//begin the rounds
        cards *deck = malloc(num_cards * n * sizeof(cards));
        cards *discard = malloc((num_cards + 1) * n * sizeof(cards));
        for (int i = 0; i < num_player; ++i) {
            memset(pp->cards,0,sizeof(cards));
            pp->num=0;
        }
        int number, disnum = 0, whowin = 0;
        int turn;//determine who should play a card
        int gameover = 1;//determine whether the game should stop
        int can_play;//test whether the player can play a card
        cards *p;//a pointer that points to the deck
        cards firstcard[1];//the card that determine the first rank and suit
        number = num_cards * n;//initialize the cards left in the deck
        p = create_deck(n);
        for (int i = 0; i <= number - 1; i++)
            deck[i] = *(p + i);//define the card structure
        shuffle(deck, num_cards * n);//shuffle the cards
        print_shuffle(fp);
        printf("\n");
        fprintf(fp, "\n");
        printf("Dealing cards...\n");
        fprintf(fp, "Dealing cards...\n");
        if (initial_num*num_player>n*num_cards){
            fprintf(stderr,"NOT ENOUGH CARDS!!!");
            exit(-1);
        }
        for (int i = 0; i < num_player; i++) {
            take_card(deck, number, players->cards, players->num, initial_num, 0);//take card from the deck
            //problem with length_take-solved
            players->num += initial_num;
            number -= initial_num;
            players = players->next;
        }//set the initial cards everyone gets
        printf("\n");
        fprintf(fp, "\n");
        printf("Determining the playing order...\n");
        fprintf(fp, "Determining the playing order...\n");
        if (j == 0) {
            turn = who_first(deck, number, discard, disnum, players, num_player, fp);
            number -= num_player;
            disnum += num_player;
        } else {
            turn = whowin;
        }
        pp = players;
        f_dd(fp,turn);
        getchar();
        CLEAR();
        for (int i = 0; i < num_player; ++i) {
            gameover *= pp->num;
            pp = pp->next;
        }//set game_over in order to determine whether the game should stop
        int first_term = 0;
        int attack = 0;//count the number of attack cards
        int continue_attack = 0;//whether to continue
        take_card(deck, number, firstcard, 0, 1, 0);
        number -= 1;
        fstart(fp, firstcard);
        take_card(firstcard, 1, discard, disnum, 1, 0);
        disnum += 1;
        int which_way=1;//which way to play
        while (gameover != 0) {
            int whoplay=pp->order;
            int play_which;
            gameover = 1;
            can_play = -1;
            printf("## Player %d's term ##\n", whoplay + 1);
            for (int i = 0; i < num_player; ++i) {
                printf("Player %d has %d card(s)\n",pp->order+1,pp->num);
                pp=pp->next;
            }
            printf("Player %d's cards: ", whoplay + 1);
            fprintf(fp,"Player %d's cards: ", whoplay + 1);
            sort_deck(pp, pp->num);
            show_card(pp->cards, pp->num);
            fshow_card(pp->cards, pp->num, fp);
            if (first_term == 0) {//the first term to play a card
                for (int i = 0; i < pp->num; ++i) {//test whether can play a card
                    if (pp->cards[i].rank == firstcard[0].rank || pp->cards[i].suit == firstcard[0].suit) {
                        can_play = i;//let can_play equal to the card taken
                        break;
                    }
                }
                if (can_play!=-1){
                    printf("Please input a number: ");
                    scanf("%d", &play_which);
                    while (((pp->cards[play_which-1].rank != firstcard[0].rank &&
                             pp->cards[play_which-1].suit != firstcard[0].suit)) && play_which != 0) {
                        printf("Invalid input! Try again!\n");
                        printf("Please input a number: ");
                        scanf("%d", &play_which);
                    }
                    if (play_which == 0) {//can't play a card
                        take_card(deck, number, pp->cards, pp->num, 1, 0);
                        number -= 1;
                        pp->num += 1;//count the card in the deck and the player's pile
                        printf("Player %d draws: ", pp->order + 1);
                        fprintf(fp, "Player %d draws: ", pp->order + 1);
                        show_which(pp->cards, pp->num - 1);
                        fshow_which(pp->cards, pp->num - 1, fp);
                    } else {//can play a card
                        printf("Player %d plays: ", pp->order + 1);
                        fprintf(fp, "Player %d plays: ", pp->order + 1);
                        show_which(pp->cards, play_which-1);//show the played card
                        fshow_which(pp->cards, play_which-1, fp);
                        if (pp->cards[play_which-1].rank<=3){
                            attack+=pp->cards[play_which-1].rank;
                        }//add an attack
                        take_card(pp->cards, pp->num, discard, disnum, 1, play_which-1);//discard the card
                        disnum += 1;
                        pp->num -= 1;//count the card in the discard pile and the player's pile
                        if (discard[disnum-1].rank == JACK) {
                            which_way==1 ? (pp = pp->next) : (pp = pp->last);//skip one player
                        } else if (discard[disnum-1].rank == QUEEN) {
                            which_way*=-1;
                            //change the direction
                        }
                    }
                }
                else{//no valid move
                    printf("No valid move. Input 0 to pass the term.\n");
                    printf("Please input a number: ");
                    scanf("%d", &play_which);
                    while (play_which!=0) {
                        printf("Invalid input! Try again!\n");
                        printf("Please input a number: ");
                        scanf("%d", &play_which);
                    }
                    take_card(deck, number, pp->cards, pp->num, 1, 0);
                    number -= 1;
                    pp->num += 1;//count the card in the deck and the player's pile
                    printf("Player %d draws: ", pp->order + 1);
                    fprintf(fp, "Player %d draws: ", pp->order + 1);
                    show_which(pp->cards, pp->num - 1);
                    fshow_which(pp->cards, pp->num - 1, fp);
                }
                first_term += 1;
            } else {//not the first term to play a card
                printf("Previous card: ");
                show_which(discard, disnum - 1);
                printf("attack= %d\n", attack);
                if (attack == 0) {//there isn't an attack
                    for (int i = 0; i < pp->num; ++i) {//test whether can play a card
                        if (pp->cards[i].rank==discard[disnum-1].rank || pp->cards[i].suit==discard[disnum-1].suit){
                            can_play=i;//let can_play equal to the card taken
                            break;
                        }
                    }
                    if (can_play!=-1){
                        printf("Please input a number: ");
                        scanf("%d", &play_which);
                        while (((pp->cards[play_which-1].rank != discard[disnum - 1].rank &&
                                 pp->cards[play_which-1].suit != discard[disnum - 1].suit)) &&
                               play_which != 0) {
                            printf("Invalid input! Try again!\n");
                            printf("Please input a number: ");
                            scanf("%d", &play_which);
                        }
                        if (play_which == 0) {//can't play a card
                            if (number == 0) {
                                printf("Stock pile exhausted. Shuffling the discard pile and restore the stock pile\n");
                                fprintf(fp,
                                        "Stock pile exhausted. Shuffling the discard pile and restore the stock pile\n");
                                exchange_deck(deck, discard, disnum);//recreate a deck
                                number = disnum - 1;
                                disnum = 1;
                                shuffle(deck, number);//shuffle the deck
                            }
                            take_card(deck, number, pp->cards, pp->num, 1, 0);
                            number -= 1;
                            pp->num += 1;//count the card in the deck and the player's pile
                            printf("Player %d draws: ", pp->order + 1);
                            fprintf(fp, "Player %d draws: ", pp->order + 1);
                            show_which(pp->cards, pp->num - 1);
                            fshow_which(pp->cards, pp->num - 1, fp);
                        } else {//can play a card
                            printf("Player %d plays: ", pp->order + 1);
                            fprintf(fp, "Player %d plays: ", pp->order + 1);
                            show_which(pp->cards, play_which-1);//show the played card
                            fshow_which(pp->cards, play_which-1, fp);
                            if (pp->cards[play_which-1].rank<=3){
                                attack+=pp->cards[play_which-1].rank;
                            }//add an attack
                            take_card(pp->cards, pp->num, discard, disnum, 1, play_which-1);//discard the card
                            disnum += 1;
                            pp->num -= 1;//count the card in the discard pile and the player's pile
                            if (discard[disnum-1].rank == JACK) {
                                which_way==1 ? (pp = pp->next) : (pp = pp->last);//skip one player
                            } else if (discard[disnum-1].rank == QUEEN) {
                                which_way*=(-1);
                                //change the direction
                            }
                        }
                    }
                    else{//no valid move
                        printf("No valid move. Input 0 to pass the term.\n");
                        printf("Please input a number: ");
                        scanf("%d", &play_which);
                        while (play_which!=0) {
                            printf("Invalid input! Try again!\n");
                            printf("Please input a number: ");
                            scanf("%d", &play_which);
                        }
                        if (number == 0) {
                            printf("Stock pile exhausted. Shuffling the discard pile and restore the stock pile\n");
                            fprintf(fp,
                                    "Stock pile exhausted. Shuffling the discard pile and restore the stock pile\n");
                            exchange_deck(deck, discard, disnum);//recreate a deck
                            number = disnum - 1;
                            disnum = 1;
                            shuffle(deck, number);//shuffle the deck
                        }
                        take_card(deck, number, pp->cards, pp->num, 1, 0);
                        number -= 1;
                        pp->num += 1;//count the card in the deck and the player's pile
                        printf("Player %d draws: ", pp->order + 1);
                        fprintf(fp, "Player %d draws: ", pp->order + 1);
                        show_which(pp->cards, pp->num - 1);
                        fshow_which(pp->cards, pp->num - 1, fp);
                    }
                } else {//there is an attack
                    for (int i = 0; i < pp->num; ++i) {//test whether can play a card
                        if (pp->cards[i].rank==2 || pp->cards[i].rank==3 || pp->cards[i].rank==7 || pp->cards[i].rank==JACK && pp->cards[i].suit==discard[disnum-1].suit || pp->cards[i].rank==QUEEN && pp->cards[i].suit==discard[disnum-1].suit){
                            can_play=i;//let can_play equal to the card taken
                            break;
                        }
                    }
                    if (can_play!=-1){
                        printf("Please input a number: ");
                        scanf("%d", &play_which);
                        while ((pp->cards[play_which-1].rank != 2 &&
                                pp->cards[play_which-1].rank != 3 &&
                                pp->cards[play_which-1].rank != 7 &&
                                (pp->cards[play_which-1].rank != JACK ||
                                 pp->cards[play_which-1].suit != discard[disnum - 1].suit) &&
                                (pp->cards[play_which-1].rank != QUEEN ||
                                 pp->cards[play_which-1].suit != discard[disnum - 1].suit)) &&
                               play_which != 0) {
                            printf("Invalid input! Try again!\n");
                            printf("Please input a number: ");
                            scanf("%d", &play_which);
                        }
                        if (play_which != 0) {
                            if (pp->cards[play_which-1].rank == 2 ||
                                pp->cards[play_which-1].rank == 3) {//continue the attack
                                attack += pp->cards[play_which-1].rank;//add the number of attacks
                                printf("Player %d plays: ", pp->order + 1);
                                fprintf(fp,"Player %d plays: ", pp->order + 1);
                                show_which(pp->cards, play_which - 1);//show the played card
                                fshow_which(pp->cards, play_which - 1,fp);
                                take_card(pp->cards, pp->num, discard, disnum, 1,play_which - 1);//discard the card
                                disnum += 1;
                                pp->num -= 1;//count the card in the discard pile and the player's pile
                            } else if (pp->cards[play_which-1].rank == 7) {//cancel the attack
                                attack = 0;//cancel the attack
                                printf("Player %d plays: ", pp->order + 1);
                                fprintf(fp,"Player %d plays: ", pp->order + 1);
                                show_which(pp->cards, play_which - 1);//show the played card
                                fshow_which(pp->cards, play_which - 1,fp);
                                take_card(pp->cards, pp->num, discard, disnum, 1,play_which - 1);//discard the card
                                disnum += 1;
                                pp->num -= 1;//count the card in the discard pile and the player's pile
                            } else if (pp->cards[play_which-1].rank == JACK &&
                                       pp->cards[play_which-1].suit == discard[disnum - 1].suit) {//jump the attack
                                continue_attack = 1;//continue the attack
                                printf("Player %d plays: ", pp->order + 1);
                                fprintf(fp, "Player %d plays: ", pp->order + 1);
                                show_which(pp->cards, play_which-1);//show the played card
                                fshow_which(pp->cards, play_which-1, fp);
                                take_card(pp->cards, pp->num, discard, disnum, 1, play_which-1);//discard the card
                                disnum += 1;
                                pp->num -= 1;//count the card in the discard pile and the player's pile
                                which_way==1 ? (pp = pp->next) : (pp = pp->last);
                            } else if (pp->cards[play_which-1].rank == QUEEN &&
                                       pp->cards[play_which-1].suit == discard[disnum - 1].suit) {//return the attack
                                continue_attack = 1;//continue the attack
                                printf("Player %d plays: ", pp->order + 1);
                                fprintf(fp, "Player %d plays: ", pp->order + 1);
                                show_which(pp->cards, play_which-1);//show the played card
                                fshow_which(pp->cards, play_which-1, fp);
                                take_card(pp->cards, pp->num, discard, disnum, 1, play_which-1);//discard the card
                                disnum += 1;
                                pp->num -= 1;//count the card in the discard pile and the player's pile
                                which_way*=-1;
                            }
                        } else {//accept the attack
                            int a = 0;//whether need to show the information
                            printf("Player %d draws: ", pp->order + 1);
                            fprintf(fp, "Player %d draws: ", pp->order + 1);
                            for (int i = 0; i < attack; ++i) {
                                take_card(deck, number, pp->cards, pp->num, 1, 0);
                                number -= 1;
                                pp->num += 1;
                                show_special(pp->cards, pp->num - 1);
                                fshow_special(pp->cards, pp->num - 1, fp);
                                if (number == 0) {
                                    a = 1;//show the information after taking cards
                                    exchange_deck(deck, discard, disnum);//recreate a deck
                                    number = disnum - 1;
                                    disnum = 1;
                                    shuffle(deck, number);//shuffle the deck
                                }
                            }
                            if (a == 1) {
                                printf("\nStock pile exhausted. Shuffling the discard pile and restore the stock pile");
                                fprintf(fp,
                                        "\nStock pile exhausted. Shuffling the discard pile and restore the stock pile");
                            }
                            printf("\n");
                            fprintf(fp, "\n");
                            attack = 0;
                        }
                    }
                    else{//no valid move
                        printf("No valid move. Input 0 to pass the term.\n");
                        printf("Please input a number: ");
                        scanf("%d", &play_which);
                        while (play_which!=0) {
                            printf("Invalid input! Try again!\n");
                            printf("Please input a number: ");
                            scanf("%d", &play_which);
                        }
                        int a = 0;//whether need to show the information
                        printf("Player %d draws: ", pp->order + 1);
                        fprintf(fp, "Player %d draws: ", pp->order + 1);
                        for (int i = 0; i < attack; ++i) {
                            take_card(deck, number, pp->cards, pp->num, 1, 0);
                            number -= 1;
                            pp->num += 1;
                            show_special(pp->cards, pp->num - 1);
                            fshow_special(pp->cards, pp->num - 1, fp);
                            if (number == 0) {
                                a = 1;//show the information after taking cards
                                exchange_deck(deck, discard, disnum);//recreate a deck
                                number = disnum - 1;
                                disnum = 1;
                                shuffle(deck, number);//shuffle the deck
                            }
                        }
                        if (a == 1) {
                            printf("\nStock pile exhausted. Shuffling the discard pile and restore the stock pile");
                            fprintf(fp,
                                    "\nStock pile exhausted. Shuffling the discard pile and restore the stock pile");
                        }
                        printf("\n");
                        fprintf(fp, "\n");
                        attack = 0;
                    }
                    continue_attack=0;
                }
            }
            if (pp->num != 0) {
                printf("Player %d cards: ", whoplay + 1);
                fprintf(fp, "Player %d cards: ", whoplay + 1);
                sort_deck(pp, pp->num);
                show_card(pp->cards, pp->num);
                fshow_card(pp->cards, pp->num, fp);
            }
            while((ch = getchar()) != '\n' && ch != EOF);
            getchar();
            CLEAR();
            for (int i = 0; i < num_player; ++i) {
                gameover *= pp->num;
            }//set game_over in order to determine whether the game should stop
            which_way==1 ? (pp = pp->next) : (pp = pp->last);
        }
        for (int i = 0; i < num_player; ++i) {
            if (pp->num == 0) {
                whowin = pp->order;
                break;
            }
            pp=pp->next;
        }
        ffinish(whowin,j,fp);
        for (int i = 0; i < num_player; ++i) {
            if (pp->order!=0){
                pp=pp->next;
            } else{
                break;
            }
        }
        for (int i = 0; i < num_player; ++i) {
            pp->total -= pp->num;
            printf("Player %d: %d, total: %d\n", i + 1, -pp->num, pp->total);
            fprintf(fp, "Player %d: %d, total: %d\n", i + 1, -pp->num, pp->total);
            pp=pp->next;
        }
        printf("Round %d ends.", j + 1);
        fprintf(fp,"Round %d ends.", j + 1);
        while((ch = getchar()) != '\n' && ch != EOF);
        getchar();
        free(deck);
        free(discard);
    }
    FreeList(players,num_player);
}