#include<iostream>
using namespace std;

int main(){
//定义10个元素的数组A
int A[10];
//输入数组A
for (int i = 0; i < 10; i++)
{
    cin>>A[i];
}
//求数组10个数的最大值
int max = A[0];
for (int i = 0; i < 10; i++)
{
    if (A[i]>max)
    {
        max = A[i];
    }
}
//输出最大值
cout<<max<<endl;
//求数组10个数的最小值
int min = A[0];
for (int i = 0; i < 10; i++)
{
    if (A[i]<min)
    {
        min = A[i];
    }
}
//输出最小值
cout<<min<<endl;
//求数组10个数的平均值
int sum = 0;
for (int i = 0; i < 10; i++)
{
    sum+=A[i];
}
double average = sum/10.0;
//输出平均值
cout<<average<<endl;
return 0;
}
