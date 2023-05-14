#include"seqlist.h"
#include"chain.h"

void SeqListtochain(SeqList &A, Chain &B)
{
    char x;
    //将表B清空
    B.Clearlist();
    int i =0;
    while (i<(A.Length)){
        A.Find(i,&x);
        B.Insert(i,x);
        i++;
    }
}