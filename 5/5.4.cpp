#include<iostream>
using namespace std;
//定义一个模板
template<typename T>
T JDZ(T a){
    //求绝对值
    if(a<0){
        a=-a;
    }
    return a;
}

int main(){
    //利用函数求整数和小数的绝对值
    int a;
    float b;
    cout<<"请输入一个整数和一个小数："<<endl;
    cin>>a>>b;
    cout<<JDZ(a)<<endl;
    cout<<JDZ(b)<<endl;
    return 0;

}