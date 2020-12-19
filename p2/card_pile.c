#include "p2.h"
#include <stdlib.h>
#define num_cards 52
//to create a pile of card
cards * card_pile(){
    cards card[num_cards];
    cards * p;
    int i=0;

    while(i<=num_cards-1) {
        if (i <= Spades_max-1) {
            card[i].rank = i % same_suit + 2;
            card[i].suit = Spades;
        } else if (i > Spades_max-1 && i <= Hearts_max-1) {
            card[i].rank = i % same_suit + 2;
            card[i].suit = Hearts;
        } else if (i > Hearts_max-1 && i <= Diamonds_max-1) {
            card[i].rank = i % same_suit + 2;
            card[i].suit = Diamonds;
        } else if (i > Diamonds_max-1 && i <= Clubs_max-1) {
            card[i].rank = i % same_suit + 2;
            card[i].suit = Clubs;
        }
        card[i].order=i%52;
        i++;
    }
    p=card;
    return p;
}