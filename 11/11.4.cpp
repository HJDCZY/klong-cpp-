#include "chain.h"

void chain::rinsert(char item){
    node* p;
    for (int i = 0; i < this->lenth; i++)
    {
        p = p->next;
    }
    p->next = new node;
    (p->next)->data = item;
    (p->next)->next = NULL;
}