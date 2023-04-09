#include<iostream>
using namespace std;

int main(){
//向数组A中输入10个整数
    int A[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>A[i];
    }
    //求10个数的最大值
    int max=A[0];
    for (int i = 0; i < 10; i++)
    {
        if (A[i]>max)
        {
            max=A[i];
        }
    }
    //求10个数的最小值
    int min=A[0];
    for (int i = 0; i < 10; i++)
    {
        if (A[i]<min)
        {
            min=A[i];
        }
    }
    //求10个数的平均值
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum+=A[i];
    }
    double average=sum/10.0;
    //输出最大值、最小值、平均值
    cout<<"最大值="<<max<<endl;
    cout<<"最小值="<<min<<endl;
    cout<<"平均值="<<average<<endl;
    return 0;
    
}