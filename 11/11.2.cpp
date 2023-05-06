#include "chain.h"

void Reverse1(chain &a, chain &b){
    B.clearlist();
    char x;
    int i,len;
    len = A.lenth();
    for ( i = 0; i < len; i++)
    {
        A.find(len-i,&x);
        B.insert(i,x);
    }
    A.clearlist();
    
}