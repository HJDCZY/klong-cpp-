#include <iostream>
using namespace std;

int sum (int(* ptr)[5]){
    int sum =0;
    for (int i = 0; i < 5; i++)
    {
        sum+= *(ptr+i);
    }
    return sum;
}

int main(){
    int cache[3][5];
    cout<<"输入15个数，代表3行5列数组：";
    for ( int u = 0; u < 3; u++)
    {
        for (int i = 0; i < 5; i++)
        {
            cin>>cache[u][i];
        }
    }
    int sum1 = sum(cache);
    //此时传入的是二维数组的第一行的首地址，即cache[0][0]的地址
    //为什么有语法错误？
    int sum2 = sum(cache+5);
    //此时传入的是二维数组的第二行的首地址，即cache[1][0]的地址
    //为什么有语法错误？
    int sum3 = sum(cache+10);
    return 0;
}