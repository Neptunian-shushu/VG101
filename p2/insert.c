#include "p2.h"
void Initialize(player* head) {
    head->next=NULL;
    head->total=0;
    head->num=0;
    head->last=(player *)malloc(sizeof(player));
    head->order=0;
}

void InsertLast(player *head){
    head->next=(player *)malloc(sizeof(player));
    head->next->last=head;
    head->next->num=0;
    head->next->total=0;
    head->next->next=NULL;
}

void FreeList(player *head,int num_player) {
    player *pHead=head;
    for (int i = 0; i < num_player; ++i) {
        player *tmp=pHead->next;
        free(pHead);
        pHead=tmp;
    }
}
