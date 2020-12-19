#include "p2.h"
#define max 5

void draw_card(cards card[], int num){
    int row;
    int left;
    left=num%max;
    if (left==0){
        row=(num-left)/max;
    }
    else{
        row=(num-left)/max+1;
    }
    switch (left) {
        case 0:
            for (int i = 0; i < row; ++i) {
                char r[5];
                for (int j = 0; j < max; ++j) {
                    switch (card[i*max+j].rank) {
                        case 10:
                            r[j]='0';break;
                        case JACK:
                            r[j]='J';break;
                        case QUEEN:
                            r[j]='Q';break;
                        case KING:
                            r[j]='K';break;
                        case ACE:
                            r[j]='A';break;
                        default:
                            r[j]=card[i*max+j].rank+48;break;
                    }
                }
                char s[5];
                for (int j = 0; j < max; ++j) {
                    switch (card[i*max+j].suit) {
                        case Spades:
                            s[j]='S';break;
                        case Hearts:
                            s[j]='H';break;
                        case Diamonds:
                            s[j]='D';break;
                        case Clubs:
                            s[j]='C';break;
                        default:break;
                    }
                }
                printf(" ______   ______   ______   ______   ______  \n"
                       "|%c    |  |%c    |  |%c    |  |%c    |  |%c    |  \n"
                       "|     |  |     |  |     |  |     |  |     |  \n"
                       "|  %c  |  |  %c  |  |  %c  |  |  %c  |  |  %c  |  \n"
                       "|     |  |     |  |     |  |     |  |     |  \n"
                       "|____%c|  |____%c|  |____%c|  |____%c|  |____%c|  \n",r[0],r[1],r[2],r[3],r[4],s[0],s[1],s[2],s[3],s[4],r[0],r[1],r[2],r[3],r[4]);
            }
            break;
        case 1:
            for (int i = 0; i < row-1; ++i) {
                char r[5];
                for (int j = 0; j < max; ++j) {
                    switch (card[i*max+j].rank) {
                        case 10:
                            r[j]='0';break;
                        case JACK:
                            r[j]='J';break;
                        case QUEEN:
                            r[j]='Q';break;
                        case KING:
                            r[j]='K';break;
                        case ACE:
                            r[j]='A';break;
                        default:
                            r[j]=card[i*max+j].rank+48;break;
                    }
                }
                char s[5];
                for (int j = 0; j < max; ++j) {
                    switch (card[i*max+j].suit) {
                        case Spades:
                            s[j]='S';break;
                        case Hearts:
                            s[j]='H';break;
                        case Diamonds:
                            s[j]='D';break;
                        case Clubs:
                            s[j]='C';break;
                        default:break;
                    }
                }
                printf(" ______   ______   ______   ______   ______  \n"
                       "|%c    |  |%c    |  |%c    |  |%c    |  |%c    |  \n"
                       "|     |  |     |  |     |  |     |  |     |  \n"
                       "|  %c  |  |  %c  |  |  %c  |  |  %c  |  |  %c  |  \n"
                       "|     |  |     |  |     |  |     |  |     |  \n"
                       "|____%c|  |____%c|  |____%c|  |____%c|  |____%c|  \n",r[0],r[1],r[2],r[3],r[4],s[0],s[1],s[2],s[3],s[4],r[0],r[1],r[2],r[3],r[4]);
            }
            char r1[1];
            for (int i = 0; i < 1; ++i) {
                switch (card[num-1+i].rank) {
                    case 10:
                        r1[i]='0';break;
                    case JACK:
                        r1[i]='J';break;
                    case QUEEN:
                        r1[i]='Q';break;
                    case KING:
                        r1[i]='K';break;
                    case ACE:
                        r1[i]='A';break;
                    default:
                        r1[i]=card[num-1+i].rank+48;break;
                }
            }
            char s1[1];
            for (int i = 0; i < 1; ++i) {
                switch (card[num-1+i].suit) {
                    case Spades:
                        s1[i]='S';break;
                    case Hearts:
                        s1[i]='H';break;
                    case Diamonds:
                        s1[i]='D';break;
                    case Clubs:
                        s1[i]='C';break;
                    default:break;
                }
            }
            printf(" ______   \n"
                   "|%c    |  \n"
                   "|     |  \n"
                   "|  %c  |  \n"
                   "|     |  \n"
                   "|____%c|  \n",r1[0],s1[0],r1[0]);
            break;
        case 2:
            for (int i = 0; i < row-1; ++i) {
                char r[5];
                for (int j = 0; j < max; ++j) {
                    switch (card[i*max+j].rank) {
                        case 10:
                            r[j]='0';break;
                        case JACK:
                            r[j]='J';break;
                        case QUEEN:
                            r[j]='Q';break;
                        case KING:
                            r[j]='K';break;
                        case ACE:
                            r[j]='A';break;
                        default:
                            r[j]=card[i*max+j].rank+48;break;
                    }
                }
                char s[5];
                for (int j = 0; j < max; ++j) {
                    switch (card[i*max+j].suit) {
                        case Spades:
                            s[j]='S';break;
                        case Hearts:
                            s[j]='H';break;
                        case Diamonds:
                            s[j]='D';break;
                        case Clubs:
                            s[j]='C';break;
                        default:break;
                    }
                }
                printf(" ______   ______   ______   ______   ______  \n"
                       "|%c    |  |%c    |  |%c    |  |%c    |  |%c    |  \n"
                       "|     |  |     |  |     |  |     |  |     |  \n"
                       "|  %c  |  |  %c  |  |  %c  |  |  %c  |  |  %c  |  \n"
                       "|     |  |     |  |     |  |     |  |     |  \n"
                       "|____%c|  |____%c|  |____%c|  |____%c|  |____%c|  \n",r[0],r[1],r[2],r[3],r[4],s[0],s[1],s[2],s[3],s[4],r[0],r[1],r[2],r[3],r[4]);
            }
            char r2[2];
            for (int i = 0; i < 2; ++i) {
                switch (card[num-2+i].rank) {
                    case 10:
                        r2[i]='0';break;
                    case JACK:
                        r2[i]='J';break;
                    case QUEEN:
                        r2[i]='Q';break;
                    case KING:
                        r2[i]='K';break;
                    case ACE:
                        r2[i]='A';break;
                    default:
                        r2[i]=card[num-2+i].rank+48;break;
                }
            }
            char s2[2];
            for (int i = 0; i < 2; ++i) {
                switch (card[num-2+i].suit) {
                    case Spades:
                        s2[i]='S';break;
                    case Hearts:
                        s2[i]='H';break;
                    case Diamonds:
                        s2[i]='D';break;
                    case Clubs:
                        s2[i]='C';break;
                    default:break;
                }
            }
            printf(" ______   ______   \n"
                   "|%c    |  |%c    |  \n"
                   "|     |  |     |  \n"
                   "|  %c  |  |  %c  |  \n"
                   "|     |  |     |  \n"
                   "|____%c|  |____%c|  \n",r2[0],r2[1],s2[0],s2[1],r2[0],r2[1]);
            break;
        case 3:
            for (int i = 0; i < row-1; ++i) {
                char r[5];
                for (int j = 0; j < max; ++j) {
                    switch (card[i*max+j].rank) {
                        case 10:
                            r[j]='0';break;
                        case JACK:
                            r[j]='J';break;
                        case QUEEN:
                            r[j]='Q';break;
                        case KING:
                            r[j]='K';break;
                        case ACE:
                            r[j]='A';break;
                        default:
                            r[j]=card[i*max+j].rank+48;break;
                    }
                }
                char s[5];
                for (int j = 0; j < max; ++j) {
                    switch (card[i*max+j].suit) {
                        case Spades:
                            s[j]='S';break;
                        case Hearts:
                            s[j]='H';break;
                        case Diamonds:
                            s[j]='D';break;
                        case Clubs:
                            s[j]='C';break;
                        default:break;
                    }
                }
                printf(" ______   ______   ______   ______   ______  \n"
                       "|%c    |  |%c    |  |%c    |  |%c    |  |%c    |  \n"
                       "|     |  |     |  |     |  |     |  |     |  \n"
                       "|  %c  |  |  %c  |  |  %c  |  |  %c  |  |  %c  |  \n"
                       "|     |  |     |  |     |  |     |  |     |  \n"
                       "|____%c|  |____%c|  |____%c|  |____%c|  |____%c|  \n",r[0],r[1],r[2],r[3],r[4],s[0],s[1],s[2],s[3],s[4],r[0],r[1],r[2],r[3],r[4]);
            }
            char r3[3];
            for (int i = 0; i < 3; ++i) {
                switch (card[num-3+i].rank) {
                    case 10:
                        r3[i]='0';break;
                    case JACK:
                        r3[i]='J';break;
                    case QUEEN:
                        r3[i]='Q';break;
                    case KING:
                        r3[i]='K';break;
                    case ACE:
                        r3[i]='A';break;
                    default:
                        r3[i]=card[num-3+i].rank+48;break;
                }
            }
            char s3[3];
            for (int i = 0; i < 3; ++i) {
                switch (card[num-3+i].suit) {
                    case Spades:
                        s3[i]='S';break;
                    case Hearts:
                        s3[i]='H';break;
                    case Diamonds:
                        s3[i]='D';break;
                    case Clubs:
                        s3[i]='C';break;
                    default:break;
                }
            }
            printf(" ______   ______   ______   \n"
                   "|%c    |  |%c    |  |%c    |  \n"
                   "|     |  |     |  |     |  \n"
                   "|  %c  |  |  %c  |  |  %c  |  \n"
                   "|     |  |     |  |     |  \n"
                   "|____%c|  |____%c|  |____%c|  \n",r3[0],r3[1],r3[2],s3[0],s3[1],s3[2],r3[0],r3[1],r3[2]);
            break;
        case 4:
            for (int i = 0; i < row-1; ++i) {
                char r[5];
                for (int j = 0; j < max; ++j) {
                    switch (card[i*max+j].rank) {
                        case 10:
                            r[j]='0';break;
                        case JACK:
                            r[j]='J';break;
                        case QUEEN:
                            r[j]='Q';break;
                        case KING:
                            r[j]='K';break;
                        case ACE:
                            r[j]='A';break;
                        default:
                            r[j]=card[i*max+j].rank+48;break;
                    }
                }
                char s[5];
                for (int j = 0; j < max; ++j) {
                    switch (card[i*max+j].suit) {
                        case Spades:
                            s[j]='S';break;
                        case Hearts:
                            s[j]='H';break;
                        case Diamonds:
                            s[j]='D';break;
                        case Clubs:
                            s[j]='C';break;
                        default:break;
                    }
                }
                printf(" ______   ______   ______   ______   ______  \n"
                       "|%c    |  |%c    |  |%c    |  |%c    |  |%c    |  \n"
                       "|     |  |     |  |     |  |     |  |     |  \n"
                       "|  %c  |  |  %c  |  |  %c  |  |  %c  |  |  %c  |  \n"
                       "|     |  |     |  |     |  |     |  |     |  \n"
                       "|____%c|  |____%c|  |____%c|  |____%c|  |____%c|  \n",r[0],r[1],r[2],r[3],r[4],s[0],s[1],s[2],s[3],s[4],r[0],r[1],r[2],r[3],r[4]);
            }
            char r4[4];
            for (int i = 0; i < 4; ++i) {
                switch (card[num-4+i].rank) {
                    case 10:
                        r4[i]='0';break;
                    case JACK:
                        r4[i]='J';break;
                    case QUEEN:
                        r4[i]='Q';break;
                    case KING:
                        r4[i]='K';break;
                    case ACE:
                        r4[i]='A';break;
                    default:
                        r4[i]=card[num-4+i].rank+48;break;
                }
            }
            char s4[4];
            for (int i = 0; i < 4; ++i) {
                switch (card[num-4+i].suit) {
                    case Spades:
                        s4[i]='S';break;
                    case Hearts:
                        s4[i]='H';break;
                    case Diamonds:
                        s4[i]='D';break;
                    case Clubs:
                        s4[i]='C';break;
                    default:break;
                }
            }
            printf(" ______   ______   ______   ______   \n"
                   "|%c    |  |%c    |  |%c    |  |%c    |  \n"
                   "|     |  |     |  |     |  |     |  \n"
                   "|  %c  |  |  %c  |  |  %c  |  |  %c  |  \n"
                   "|     |  |     |  |     |  |     |  \n"
                   "|____%c|  |____%c|  |____%c|  |____%c|  \n",r4[0],r4[1],r4[2],r4[3],s4[0],s4[1],s4[2],s4[3],r4[0],r4[1],r4[2],r4[3]);
            break;
        default:break;
    }
}

void draw_which(cards card[], int which){
    char r1[1];
    switch (card[which].rank) {
        case 10:
            r1[0]='0';break;
        case JACK:
            r1[0]='J';break;
        case QUEEN:
            r1[0]='Q';break;
        case KING:
            r1[0]='K';break;
        case ACE:
            r1[0]='A';break;
        default:
            r1[0]=card[which].rank+48;break;
    }
    char s1[1];
    switch (card[which].suit) {
        case Spades:
            s1[0]='S';break;
        case Hearts:
            s1[0]='H';break;
        case Diamonds:
            s1[0]='D';break;
        case Clubs:
            s1[0]='C';break;
        default:break;
    }
    printf("______   \n"
           "|%c    |  \n"
           "|     |  \n"
           "|  %c  |  \n"
           "|     |  \n"
           "|____%c|  \n",r1[0],s1[0],r1[0]);
}