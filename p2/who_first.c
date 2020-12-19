#include "p2.h"
#include <stdio.h>
int who_first(cards * deck,int length, cards * discard, int disnum, player* players, int n, FILE* fp){
    int min,who;
    for (int i = 0; i < n; i++) {
        if (length<=n){
            fprintf(stderr,"NOT ENOUGH CARDS!!!");
            exit(-1);
        }
        take_card(deck,length,players->cards,players->num,1,0);
        printf("Player %d: ",i+1);
        fprintf(fp,"Player %d: ",i+1);
        show_which(players->cards,players->num);
        fshow_which(players->cards,players->num,fp);
        players=players->next;
    }//every player take a card from the deck
    min=players->cards[players->num].rank;
    for (int i = 0; i < n; i++) {
        players=players->next;
        if (min>=players->cards[players->num].rank){
            min=players->cards[players->num].rank;
        }
    }//determine the smallest
    for (int i = 0; i < n; ++i) {
        if (players->cards[players->num].rank==min){
            who=players->order;
        }
        players=players->next;
    }
    for (int i = 0; i < n; i++) {
        take_card(players->cards,players->num,discard,disnum+i,1,players->num);
        players=players->next;
    }
    return who;
}

int rwho_first(cards * deck,int length, cards * discard, int disnum, player* players, int n, FILE* fp){
    int min,who;
    for (int i = 0; i < n; i++) {
        if (length<=n){
            fprintf(stderr,"NOT ENOUGH CARDS!!!");
            exit(-1);
        }
        take_card(deck,length,players->cards,players->num,1,0);
        printf("Player %d: \n",i+1);
        fprintf(fp,"Player %d: ",i+1);
        draw_which(players->cards,players->num);
        fshow_which(players->cards,players->num,fp);
        players=players->next;
    }//every player take a card from the deck
    min=players->cards[players->num].rank;
    for (int i = 0; i < n; i++) {
        players=players->next;
        if (min>=players->cards[players->num].rank){
            min=players->cards[players->num].rank;
        }
    }//determine the smallest
    for (int i = 0; i < n; ++i) {
        if (players->cards[players->num].rank==min){
            who=players->order;
        }
        players=players->next;
    }
    for (int i = 0; i < n; i++) {
        take_card(players->cards,players->num,discard,disnum+i,1,players->num);
        players=players->next;
    }
    return who;
}