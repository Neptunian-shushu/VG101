#ifndef P2_P2_H
#define P2_P2_H
#define Spades_max 13
#define Hearts_max 26
#define Diamonds_max 39
#define Clubs_max 52
#define Spades 1
#define Hearts 2
#define Diamonds 3
#define Clubs 4
#define same_suit 13
#define ACE 14
#define KING 13
#define QUEEN 12
#define JACK 11
#define num_cards 52
#ifdef _WIN32
#define CLEAR() do {system("cls");}while((void)0,0)
#else
#define CLEAR() do {system("clear");}while((void)0,0)
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rank, suit;
    int order;
}cards;
typedef struct player{
    struct player *last;
    int num;//how many cards
    int total;//total scores
    cards cards[20];//cards the player has
    int order;
    struct player *next;
}player;
cards * card_pile();
void show_card(cards draw_card[], int n);
cards * create_deck(int n);
void shuffle(cards * deck, int length);
void take_card(cards * cardpile, int length, cards * takeout, int length_take, int take, int takewhich);
void initialize_player(player * players, int num_player);
int who_first(cards * deck,int length, cards * discard, int disnum, player* players, int n, FILE* fp);
void show_which(cards draw_card[], int which);
void exchange_deck(cards* deck, cards* discard, int number);
void show_special(cards draw_card[], int which);
void before_game(player * players, int num_player);
void sort_deck(player * player_card, int number);
void get_input(int argc, char* argv[],int* input,char* name);
void demo(int num_player, int initial_num, int n, int num_round, FILE* fp);
void print_initial(int r,int n, int p);
void print_shuffle(FILE* fp);
void fshow_card(cards draw_card[], int n, FILE* fp);
void f_dd(FILE* fp,int turn);
void fstart(FILE* fp, cards* firstcard);
void print_demoinitial(int r,int n, int p, FILE* fp);
void fshow_which(cards draw_card[], int which, FILE* fp);
void fshow_special(cards draw_card[], int which, FILE* fp);
void ffinish(int whowin, int j, FILE* fp);
void fprint_initial(int r,int n, int p, FILE* fp);
void Initialize(player* head);
void InsertLast(player *head);
void FreeList(player *head,int num_player);
void draw_card(cards card[], int num);
void draw_which(cards card[], int which);
void no_ascii(int num_player, int initial_num, int n, int num_round, FILE* fp);
void real_game(int num_player, int initial_num, int n, int num_round, FILE* fp);
int rwho_first(cards * deck,int length, cards * discard, int disnum, player* players, int n, FILE* fp);
#endif //P2_P2_H
