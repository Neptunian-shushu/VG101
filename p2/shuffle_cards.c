#include "p2.h"
#include <stdlib.h>
#include <time.h>
void shuffle(cards * deck, int length){
    cards current;
    int num;
    srand(time(NULL));
    //printf("a\n");
    for (int j=0; j<length; j++) {
        num = rand() % (length - 1);
        //printf("num=%d\n",num);
        current = deck[j];
        deck[j]=deck[num];
        deck[num]=current;
        //_sleep(1);
    }
}