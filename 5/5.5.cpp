#include<iostream>
using namespace std;

//求绝对值，用函数的多个重载实现不同数据类型的绝对值
int JDZ(int a){
    if(a<0){
        a=-a;
    }
    return a;
}
float JDZ(float a){
    if(a<0){
        a=-a;
    }
    return a;
}
double JDZ(double a){
    if(a<0){
        a=-a;
    }
    return a;
}
int main(){
    int a;
    float b;
    double c;
    cout<<"请输入1个整数和2个小数："<<endl;
    cin>>a>>b>>c;
    cout<<JDZ(a)<<endl;
    cout<<JDZ(b)<<endl;
    cout<<JDZ(c)<<endl;
    return 0;

}