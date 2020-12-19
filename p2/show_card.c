#include "p2.h"
#include <stdio.h>
//to display a card
void show_card(cards draw_card[], int n){
    for (int i = 0; i < n; i++) {
        switch (draw_card[i].suit) {
            case Spades:
                if (draw_card[i].rank<=10){
                    printf("Spades %d;",draw_card[i].rank);
                }
                else{
                    switch (draw_card[i].rank) {
                        case ACE:
                            printf("Spades A;");break;
                        case KING:
                            printf("Spades K;");break;
                        case QUEEN:
                            printf("Spades Q;");break;
                        case JACK:
                            printf("Spades J;");break;
                        default:
                            break;
                    }
                }break;
            case Hearts:
                if (draw_card[i].rank<=10){
                    printf("Hearts %d;",draw_card[i].rank);
                }
                else{
                    switch (draw_card[i].rank) {
                        case ACE:
                            printf("Hearts A;");break;
                        case KING:
                            printf("Hearts K;");break;
                        case QUEEN:
                            printf("Hearts Q;");break;
                        case JACK:
                            printf("Hearts J;");break;
                        default:
                            break;
                    }
                }break;
            case Diamonds:
                if (draw_card[i].rank<=10){
                    printf("Diamonds %d;",draw_card[i].rank);
                }
                else{
                    switch (draw_card[i].rank) {
                        case ACE:
                            printf("Diamonds A;");break;
                        case KING:
                            printf("Diamonds K;");break;
                        case QUEEN:
                            printf("Diamonds Q;");break;
                        case JACK:
                            printf("Diamonds J;");break;
                        default:
                            break;
                    }
                }break;
            case Clubs:
                if (draw_card[i].rank<=10){
                    printf("Clubs %d;",draw_card[i].rank);
                }
                else{
                    switch (draw_card[i].rank) {
                        case ACE:
                            printf("Clubs A;");break;
                        case KING:
                            printf("Clubs K;");break;
                        case QUEEN:
                            printf("Clubs Q;");break;
                        case JACK:
                            printf("Clubs J;");break;
                        default:
                            break;
                    }
                }break;
            default:
                break;
        }
    }
    printf("\n");
}

void show_which(cards draw_card[], int which){
    switch (draw_card[which].suit) {
        case Spades:
            if (draw_card[which].rank<=10){
                printf("Spades %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        printf("Spades A;");break;
                    case KING:
                        printf("Spades K;");break;
                    case QUEEN:
                        printf("Spades Q;");break;
                    case JACK:
                        printf("Spades J;");break;
                    default:
                        break;
                }
            }break;
        case Hearts:
            if (draw_card[which].rank<=10){
                printf("Hearts %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        printf("Hearts A;");break;
                    case KING:
                        printf("Hearts K;");break;
                    case QUEEN:
                        printf("Hearts Q;");break;
                    case JACK:
                        printf("Hearts J;");break;
                    default:
                        break;
                }
            }break;
        case Diamonds:
            if (draw_card[which].rank<=10){
                printf("Diamonds %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        printf("Diamonds A;");break;
                    case KING:
                        printf("Diamonds K;");break;
                    case QUEEN:
                        printf("Diamonds Q;");break;
                    case JACK:
                        printf("Diamonds J;");break;
                    default:
                        break;
                }
            }break;
        case Clubs:
            if (draw_card[which].rank<=10){
                printf("Clubs %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        printf("Clubs A;");break;
                    case KING:
                        printf("Clubs K;");break;
                    case QUEEN:
                        printf("Clubs Q;");break;
                    case JACK:
                        printf("Clubs J;");break;
                    default:
                        break;
                }
            }break;
        default:
            break;
    }
    printf("\n");
}

void show_special(cards draw_card[], int which){
    //show special cards
    switch (draw_card[which].suit) {
        case Spades:
            if (draw_card[which].rank<=10){
                printf("Spades %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        printf("Spades A;");break;
                    case KING:
                        printf("Spades K;");break;
                    case QUEEN:
                        printf("Spades Q;");break;
                    case JACK:
                        printf("Spades J;");break;
                    default:
                        break;
                }
            }break;
        case Hearts:
            if (draw_card[which].rank<=10){
                printf("Hearts %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        printf("Hearts A;");break;
                    case KING:
                        printf("Hearts K;");break;
                    case QUEEN:
                        printf("Hearts Q;");break;
                    case JACK:
                        printf("Hearts J;");break;
                    default:
                        break;
                }
            }break;
        case Diamonds:
            if (draw_card[which].rank<=10){
                printf("Diamonds %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        printf("Diamonds A;");break;
                    case KING:
                        printf("Diamonds K;");break;
                    case QUEEN:
                        printf("Diamonds Q;");break;
                    case JACK:
                        printf("Diamonds J;");break;
                    default:
                        break;
                }
            }break;
        case Clubs:
            if (draw_card[which].rank<=10){
                printf("Clubs %d;",draw_card[which].rank);
            }
            else{
                switch (draw_card[which].rank) {
                    case ACE:
                        printf("Clubs A;");break;
                    case KING:
                        printf("Clubs K;");break;
                    case QUEEN:
                        printf("Clubs Q;");break;
                    case JACK:
                        printf("Clubs J;");break;
                    default:
                        break;
                }
            }break;
        default:
            break;
    }
}
