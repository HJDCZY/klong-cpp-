#include<iostream>
#include<string>
//c++中，string还是比c风格字符串好用一点
using namespace std;

int statistics(string str, char a){
    int len = str.length();
    int result =0;
    for (int i = 0; i < len; i++)
    {
        if (str[i]== a)
        {
            result++ ;
        }
    }
    return result;
}

int main(){
    string input;
    cout<<"输入一个字符串:";
    cin>>input;
    cout<<"字母a的个数是：";
    cout<<statistics(input,'a')<<endl;;
    cout<<"字母i的个数是："<<statistics(input,'i')<<endl;
    return 0;
}