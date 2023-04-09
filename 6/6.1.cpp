#include<iostream>
using namespace std;

//使用递归，把数组从n位开始的所有元素向前移动一位
//all是数组的长度
void move(int a[], int n,int all)
{
    if(n == all){
        a[n-1] = 0;
        return;
    }
    a[n-1] = a[n];
    move(a, n+1,all);
}
//将上面函数重载为移动字符串的元素
void move(char a[], int n,int all)
{
    if(n == all){
        a[n-1] = 0;
        return;
    }
    a[n-1] = a[n];
    move(a, n+1,all);
}
//使用上面的函数，查找字符串中的元素并删除
void delchar(char* s1,char s2,int lenth){

    int i =0;
    while (i <= lenth)
    {
        if (s1[i]==s2)
        {
            move(s1,i+1,lenth);
        }
        i++;    
    }
    
}

int main(){
    char a[] = "123456789456789";
    int lenth = sizeof(a);
    cout<<a<<endl;
    delchar(a, '4',lenth-1);
    cout<<a<<endl;
    return 0;
}