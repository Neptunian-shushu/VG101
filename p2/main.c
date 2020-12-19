#include <stdio.h>
#include "p2.h"

int main(int argc, char* argv[]) {
    int num_round;
    int n;
    int num_player;
    int initial_num;
    int input[7]={4,5,2,1,0,0,0};
    FILE* fp;
    char name[]="onecard.log";
    get_input(argc, argv, input, name);//get the input variables from the users
    fp=fopen(name,"w");
    if (input[5]==-1){//whether to stop this game
        return 0;
    }
    num_player=input[0];
    initial_num=input[1];
    n=input[2];
    num_round=input[3];
    if (input[4]==1){
        demo(num_player,initial_num,n,num_round,fp);
    }
    else {
        if (input[6]==0){
            real_game(num_player,initial_num,n,num_round,fp);
        }
        else{
            no_ascii(num_player,initial_num,n,num_round,fp);
        }
    }
    fclose(fp);
    return 0;
}