#include "p2.h"
#define num_cards 52
//create the deck
cards * create_deck(int n){
    cards card[num_cards],a_deck[num_cards*n];
    cards * p,* q;
    p=card_pile();
    for(int i=0;i<=num_cards-1;i++)
        card[i]=*(p+i);//define the card structure
    for(int i=0;i<=num_cards*n-1;i++)
        a_deck[i]=card[i%52];//define the deck data structure
    q=a_deck;
    return q;
}

void exchange_deck(cards* deck, cards* discard, int number){
    for (int i = 0; i < number-1; ++i) {
        deck[i]=discard[i];
        discard[i]=discard[number];
    }
    discard[0]=discard[number-1];
    discard[number-1]=discard[number];
}