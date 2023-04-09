#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[30] = "hello world";
    char s[30] = "I love programming";
    cout<<"str="<<str<<endl;
    cout<<"s="<<s<<endl;
    char ptr[30] = "\0";
    strcpy(ptr,str);
    strcpy(str,s);
    //如果不给str分配足够的空间，会发生内存越界
    strcpy(s,ptr);
    cout<<endl;
    //输出交换后的字符串
    cout<<"str="<<str<<endl;
    cout<<"s="<<s<<endl;
    return 0;
}