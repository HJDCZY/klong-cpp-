#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    double FenZhiPai =0.0 ;
    double i;
    i =1.0;//分母
    double a = 1.0;//(-1)^n
    do
    {
        FenZhiPai = FenZhiPai +( a*(1/i));
        // cout<<"1/4 pai"<<FenZhiPai<<endl;
        //cout<<"i"<<i <<endl;
        i = i+2;
        a =-a;
    } while ( i < 1000000 );
    double pai = FenZhiPai *4;
    cout<<setprecision(12)<<pai<<endl;
    return 0;
}