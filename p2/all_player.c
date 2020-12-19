#include "p2.h"
//to arrange all the players in an array
player * all_player(int n){
    player players[n];
    player * q;

    for (int i=0; i<=n-1;i++) {
        players[i].num = i+1;
    }
    q=players;
    return q;
}
