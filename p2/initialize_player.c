#include "p2.h"
void initialize_player(player * players, int num_player){
    for (int i = 0; i < num_player; i++) {
        players[i].num = 0;//initial the number of cards everyone gets before the game start
    }
}

void before_game(player * players, int num_player){
    for (int i = 0; i < num_player; i++) {
        players[i].total = 0;//initial the number of cards everyone gets before the game start
    }
}

void sort_deck(player * player_card, int number){
    for (int i = number-1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cards p;
            if (player_card->cards[j].order>=player_card->cards[j+1].order){
                p=player_card->cards[j+1];
                player_card->cards[j+1]=player_card->cards[j];
                player_card->cards[j]=p;
            }
        }
    }
}