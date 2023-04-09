#include<iostream>
#include<math.h>
using namespace std;

bool Su(int input){//判断是否是素数
    int i = 2;
    double cache;
    while (i <= sqrt(input))
    {
        if (input % i ==0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int main(){
    //有一个变量存储素数的个数并控制循环
    int i=0;
    //有一个变量储存要判断的数
    int number=2;
    bool is = true;
    for (; i < 100;)
    {
        is = Su(number);
        if (is)
        {
            i++;
            cout<<number<<"|";
        }
        number++;
    }
    
    return 0;
}