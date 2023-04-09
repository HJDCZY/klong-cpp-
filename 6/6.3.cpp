#include<iostream>
using namespace std;

int find(char a[],char ch,int lenth){
    for (int i = 0; i <= lenth; i++)
    {
        if (a[i]==ch)
        {
            return i+1;
        }
    }
    return 0;
}

int main(){
    char a[] ="hello world";
    int lenth = sizeof(a);
    int result = find(a,'o',lenth);
    cout<<result<<endl;
    return 0;
}