#include "p2.h"
//take a card from the deck, and then delete it
void take_card(cards * cardpile, int length, cards * takeout, int length_take, int take, int takewhich){
    for (int i = 0; i < take; i++) {
        takeout[i+length_take]=cardpile[i+takewhich];
    }
    for (int i = 0; i < length-take; i++) {
        cardpile[i+takewhich]=cardpile[i+takewhich+take];
    }
}