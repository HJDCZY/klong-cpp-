#include<iostream>
using namespace std;

int n_(int n){
    int result =1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;   
}

int sigma(int n){
    int result;
    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    return result;
}

int main(){
    int m,n;
    cout<<"请输入m,n：";
    cin>>m>>n;
    int s1=n_(m)/(n_(n)*n_(m-n));
    int s2=sigma(m)-sigma(n);
    cout<<"s1="<<s1<<endl;
    cout<<"s2="<<s2<<endl;
    return 0;
}