#include "p2.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <getopt.h>
void get_input(int argc, char* argv[],int* input,char* name) {
    int c;
    while (1){
        int opt_dex=0;
        struct option long_options[] = {
                {"help", no_argument, 0, 'h'},
                {"log",required_argument,0,'l'},
                {"player-number",required_argument,0,'n'},
                {"initial-cards",required_argument,0,'c'},
                {"decks",required_argument,0,'d'},
                {"rounds",required_argument,0,'r'},
                {"auto",no_argument,0,'a'},
                {"no-ascii",no_argument,0,'i'},
                {0,0,0,0}
        };
        c=getopt_long(argc,argv,"hn:c:d:r:ai",long_options,&opt_dex);
        if (c==-1){
            break;
        }
        switch (c) {
            case 'h':
                printf("-h|--help               print this help message\n");
                printf("--log                   filename write the logs in filename (default: onecard.log)\n");
                printf("-n n|--player-number=n  n players, n must be larger than 2 (default: 4)\n");
                printf("-c c|--initial-cards=c  deal c cards per player, c must be at least 2 (default: 5)\n");
                printf("-d d|--decks=d          use d decks 52 cards each, d must be at least 2 (default: 2)\n");
                printf("-r r|--rounds=r         play r rounds, r must be at least 1 (default: 1)\n");
                printf("-a|--auto               run in demo mode\n");
                input[5] = -1;break;
            case 'l':
                strcpy(name,optarg);break;
            case 'n':
                input[0]=atoi(optarg);break;
            case 'c':
                input[1]=atoi(optarg);break;
            case 'd':
                input[2]=atoi(optarg);break;
            case 'r':
                input[3]=atoi(optarg);break;
            case 'a':
                input[4]=1;break;
            case 'i':
                input[6]=1;break;
            default:break;
        }

    }


}