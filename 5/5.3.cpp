#include<iostream>
using namespace std;

int maxnum(int a, int b){
    // int result =0;
    for (int i = min(a,b); i >= 1; i--)
    {
        //循环倒着来
        if (a%i==0&&b%i==0)
        {
            return i;
        }
    }
    return 0;
}
int minnum(int a ,int b){//最小公倍数
    int result;
    for (int i = max(a,b); i <= a*b; i++)
    {
        if (i%a==0&&i%b==0)
        {
            return i;
        }
        
    }
    return a*b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<maxnum(a,b)<<endl;
    cout<<minnum(a,b)<<endl;
}