#include<iostream>
using namespace std;

double average(int* ptr){
    double average,sum =0 ;
    int i =0;
    while (i<=9)
    {
        sum += *(ptr+i);
        i++;
    }
    average = sum/10;
    return average;
}

int compare (int* ptr, int comp){
    int result=0;
    int i=0;
    while(i<10){
        if (*(ptr+i) < comp)
        {
            result++;
        }
    i++;
    }
    return result;
}

int main(){
    int point[10];
    int i =0;
    while (i<=9)
    {
        cin>>point[i];
        i++;
    }
    // cout<<point;
    // cout<<average(point);
    cout<<"大于平均值的人数是:"<<10-(compare(point,average(point)))<<endl;
    cout<<"小于60分的人数是"<<compare(point,60)<<endl;
    return 0;

    
}