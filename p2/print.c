#include "p2.h"
void print_initial(int r,int n, int p){
    int ch;
    printf("########################\n");
    printf("#                      #\n");
    printf("# Welcome to One Card! #\n");
    printf("#                      #\n");
    printf("########################\n");
    printf("\n");
    while((ch = getchar()) != '\n' && ch != EOF);
    printf("---- Initial setup ----\n");
    printf("Number of rounds: %d\n", r);
    printf("Number of decks: %d\n", n);
    printf("Number of players: %d", p);
}

void fprint_initial(int r,int n, int p, FILE* fp){
    fprintf(fp,"####################\n");
    fprintf(fp,"# Welcome to One Card! #\n");
    fprintf(fp,"####################\n");
    fprintf(fp,"\n");
    fprintf(fp,"---- Initial setup ----\n");
    fprintf(fp,"Number of rounds: %d\n",r);
    fprintf(fp,"Number of decks: %d\n",n);
    fprintf(fp,"Number of players: %d", p);
}

void print_demoinitial(int r,int n, int p, FILE* fp){
    int ch;
    printf("########################\n");
    fprintf(fp,"####################\n");
    printf("#                      #\n");
    printf("# Welcome to One Card! #\n");
    fprintf(fp,"# Welcome to One Card! #\n");
    printf("#                      #\n");
    printf("########################\n");
    fprintf(fp,"####################\n");
    printf("\n");
    fprintf(fp,"\n");
    printf("---- Initial setup ----\n");
    fprintf(fp,"---- Initial setup ----\n");
    printf("Number of rounds: %d\n", r);
    fprintf(fp,"Number of rounds: %d\n",r);
    printf("Number of decks: %d\n", n);
    fprintf(fp,"Number of decks: %d\n",n);
    printf("Number of players: %d", p);
    fprintf(fp,"Number of players: %d", p);
}

void print_shuffle(FILE* fp){
    printf("\n");
    fprintf(fp,"\n");
    printf("\nShuffling cards...\n");
    fprintf(fp,"\nShuffling cards...\n");
    printf("\n");
    fprintf(fp,"\n");
}

void fshow_card(cards draw_card[], int n, FILE* fp){
    for (int i = 0; i < n; i++) {
        switch (draw_card[i].suit) {
            case Spades:
                if (draw_card[i].rank<=10){
                    fprintf(fp,"Spades %d;",draw_card[i].rank);
                }
                else{
                    switch (draw_card[i].rank) {
                        case ACE:
                            fprintf(fp,"Spades A;");break;
                        case KING:
                            fprintf(fp,"Spades K;");break;
                        case QUEEN:
                            fprintf(fp,"Spades Q;");break;
                        case JACK:
                            fprintf(fp,"Spades J;");break;
                        default:
                            break;
                    }
                }break;
            case Hearts:
                if (draw_card[i].rank<=10){
                    fprintf(fp,"Hearts %d;",draw_card[i].rank);
                }
                else{
                    switch (draw_card[i].rank) {
                        case ACE:
                            fprintf(fp,"Hearts A;");break;
                        case KING:
                            fprintf(fp,"Hearts K;");break;
                        case QUEEN:
                            fprintf(fp,"Hearts Q;");break;
                        case JACK:
                            fprintf(fp,"Hearts J;");break;
                        default:
                            break;
                    }
                }break;
            case Diamonds:
                if (draw_card[i].rank<=10){
                    fprintf(fp,"Diamonds %d;",draw_card[i].rank);
                }
                else{
                    switch (draw_card[i].rank) {
                        case ACE:
                            fprintf(fp,"Diamonds A;");break;
                        case KING:
                            fprintf(fp,"Diamonds K;");break;
                        case QUEEN:
                            fprintf(fp,"Diamonds Q;");break;
                        case JACK:
                            fprintf(fp,"Diamonds J;");break;
                        default:
                            break;
                    }
                }break;
            case Clubs:
                if (draw_card[i].rank<=10){
                    fprintf(fp,"Clubs %d;",draw_card[i].rank);
                }
                else{
                    switch (draw_card[i].rank) {
                        case ACE:
                            fprintf(fp,"Clubs A;");break;
                        case KING:
                            fprintf(fp,"Clubs K;");break;
                        case QUEEN:
                            fprintf(fp,"Clubs Q;");break;
                        case JACK:
                            fprintf(fp,"Clubs J;");break;
                        default:
                            break;
                    }
                }break;
            default:
                break;
        }
    }
    fprintf(fp,"\n");
}

void f_dd(FILE* fp,int turn){
    printf("\n");
    fprintf(fp,"\n");
    printf("The game will start with player %d\n", turn + 1);
    fprintf(fp,"The game will start with player %d\n", turn + 1);
    printf("\n");
    fprintf(fp,"\n");
}

void fstart(FILE* fp, cards* firstcard){
    printf("---- Game start ----\n");
    fprintf(fp,"---- Game start ----\n");
    printf("First card: ");
    fprintf(fp,"First card: ");
    show_card(firstcard, 1);
    fshow_card(firstcard, 1, fp);
}

void fshow_which(cards draw_card[], int which, FILE* fp){
    switch (draw_card[which].suit) {
        case Spades:
            if (draw_card[which].rank<=10){
                fprintf(fp,"Spades %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        fprintf(fp,"Spades A;");break;
                    case KING:
                        fprintf(fp,"Spades K;");break;
                    case QUEEN:
                        fprintf(fp,"Spades Q;");break;
                    case JACK:
                        fprintf(fp,"Spades J;");break;
                    default:
                        break;
                }
            }break;
        case Hearts:
            if (draw_card[which].rank<=10){
                fprintf(fp,"Hearts %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        fprintf(fp,"Hearts A;");break;
                    case KING:
                        fprintf(fp,"Hearts K;");break;
                    case QUEEN:
                        fprintf(fp,"Hearts Q;");break;
                    case JACK:
                        fprintf(fp,"Hearts J;");break;
                    default:
                        break;
                }
            }break;
        case Diamonds:
            if (draw_card[which].rank<=10){
                fprintf(fp,"Diamonds %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        fprintf(fp,"Diamonds A;");break;
                    case KING:
                        fprintf(fp,"Diamonds K;");break;
                    case QUEEN:
                        fprintf(fp,"Diamonds Q;");break;
                    case JACK:
                        fprintf(fp,"Diamonds J;");break;
                    default:
                        break;
                }
            }break;
        case Clubs:
            if (draw_card[which].rank<=10){
                fprintf(fp,"Clubs %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        fprintf(fp,"Clubs A;");break;
                    case KING:
                        fprintf(fp,"Clubs K;");break;
                    case QUEEN:
                        fprintf(fp,"Clubs Q;");break;
                    case JACK:
                        fprintf(fp,"Clubs J;");break;
                    default:
                        break;
                }
            }break;
        default:
            break;
    }
    fprintf(fp,"\n");
}

void fshow_special(cards draw_card[], int which, FILE* fp){
    //show special cards
    switch (draw_card[which].suit) {
        case Spades:
            if (draw_card[which].rank<=10){
                fprintf(fp,"Spades %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        fprintf(fp,"Spades A;");break;
                    case KING:
                        fprintf(fp,"Spades K;");break;
                    case QUEEN:
                        fprintf(fp,"Spades Q;");break;
                    case JACK:
                        fprintf(fp,"Spades J;");break;
                    default:
                        break;
                }
            }break;
        case Hearts:
            if (draw_card[which].rank<=10){
                fprintf(fp,"Hearts %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        fprintf(fp,"Hearts A;");break;
                    case KING:
                        fprintf(fp,"Hearts K;");break;
                    case QUEEN:
                        fprintf(fp,"Hearts Q;");break;
                    case JACK:
                        fprintf(fp,"Hearts J;");break;
                    default:
                        break;
                }
            }break;
        case Diamonds:
            if (draw_card[which].rank<=10){
                fprintf(fp,"Diamonds %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        fprintf(fp,"Diamonds A;");break;
                    case KING:
                        fprintf(fp,"Diamonds K;");break;
                    case QUEEN:
                        fprintf(fp,"Diamonds Q;");break;
                    case JACK:
                        fprintf(fp,"Diamonds J;");break;
                    default:
                        break;
                }
            }break;
        case Clubs:
            if (draw_card[which].rank<=10){
                fprintf(fp,"Clubs %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        fprintf(fp,"Clubs A;");break;
                    case KING:
                        fprintf(fp,"Clubs K;");break;
                    case QUEEN:
                        fprintf(fp,"Clubs Q;");break;
                    case JACK:
                        fprintf(fp,"Clubs J;");break;
                    default:
                        break;
                }
            }break;
        default:
            break;
    }
}

void ffinish(int whowin, int j, FILE* fp){
    printf("Player %d wins!\n", whowin + 1);
    fprintf(fp,"Player %d wins!\n", whowin + 1);
    printf("\n");
    fprintf(fp,"\n");
    printf("---- Stats ----\n");
    fprintf(fp,"---- Stats ----\n");
    printf("Round %d result:\n", j + 1);
    fprintf(fp,"Round %d result:\n", j + 1);
}