#include<iostream>
using namespace std;

void upthan(int a[],double com){
    cout<<"大于"<<com<<"分的人："<<endl;
    cout<<"学号  成绩"<<endl;
    for (int i = 0; i < 30; i++)
    {
        if (a[i]>=com)
        {
            cout<<i+1<<"    "<<a[i]<<endl;
        } 
    }
    cout<<"-------------------"<<endl;
}

void below60(int a[]){
    cout<<"低于60分的人:"<<endl;
    cout<<"学号  成绩"<<endl;
    for (int i = 0; i <= 29; i++)
    {
        if (a[i]<60)
        {
            cout<<i+1<<"    "<<a[i]<<endl;
        }
        
    }
    cout<<"---------------------"<<endl;
}
double average(int a[]){
    int sum = 0;
    for (int i = 0; i < 30; i++)
    {
        sum+=a[i];
    }
    return (sum/30);
}
//找到最大的元素并在数组中删除这个元素
int result[2];
int* findMaxAndDelete(int a[]){
    //找到数组中最大的元素
    int max = 0;
    int maxi = 0;
    for (int i = 0; i < 30; i++)
    {
        if (a[i]>=max)
        {
            maxi = i;//此处maxi为计算机使用,以0开始
            max = a[i];
        }
    }
    //删除最大的元素
    result[0] = maxi;
    result[1] = max;
    a[maxi] = 0;
    //需要返回最大同学学号和成绩，函数要有2个返回值,返回一个数组，int*
    return result;
}

int main(){
    int a[30]= {};//虚拟一个成绩
    for (int i = 0; i <= 29; i++)
    {
        a[i]= (3*i)+6;
    }
    int b[] = {1,2,3,4,5,6};
    upthan(a,85);
    below60(a);
    cout<<"平均成绩为"<<average(a)<<endl;
    upthan(a,average(a));
    cout<<"将30个同学的成绩进行排序"<<endl;
    int* ptr;
    int maxi ;
    int max;
    cout<<"学号  成绩"<<endl;
    for (int i = 0; i < 30; i++)
    {
        ptr = findMaxAndDelete(a);
        maxi = *ptr;
        max = *(ptr+1);
        cout<<maxi+1<<"  "<<max<<endl;
    }
    cout<<"--------------------"<<endl;
    return 0;
}