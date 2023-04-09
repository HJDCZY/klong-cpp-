#include<iostream>
#include<cmath>
using namespace std;

int a_(int num){//求a!
    int result=num;
    for ( num-- ; num >=1; num--)
    {
        result = num *result;
    }
    return result;
}

int main(){
    cout<<a_(5)+a_(6)+a_(7)<<endl;
    return 0;
}

