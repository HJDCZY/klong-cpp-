#include "seqlist.h"

//在seqlist类中增加一个名为delallitem的成员函数，用于删除所有值为item的元素
void seqlist::delallitem(T item)
{
    int x;
    for (int i = 0; i <= this->length; i++)
    {
        if (*((this->element)+i)==item)
        {
            this->delete(i,&x);
        }
        
    }
    
}