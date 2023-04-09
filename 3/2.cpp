#include<iostream>
using namespace std;

int main(){
    //两个变量存储数列需要输出的两个数
    int a1=0,a2=1;
    int i = 1;

    //有i控制输出
    int a3 ;
    //边计算边输出,加到循环里面
    for (; i <= 40; i++)//求前40个数
    {
        a3 = a1 +a2;
        cout<<a1<<" ";
        //控制换行
        if (i%8==0){
            cout<<"\n";
        }
        //往后错一位
        a1 =a2;
        a2 = a3;
    }
    
    return 0;
}