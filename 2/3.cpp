#include <iostream>
using namespace std;

int main(){
    char input =0;
    cout<<"请输入一个字符：";
    cin>>input;
    //判断是数字，小写字母，大写字母或者其他字符
    if(input >= '0' && input <= '9'){
        cout<<"数字"<<endl;
    }
    else if(input >= 'a' && input <= 'z'){
        cout<<"小写字母"<<endl;
    }
    else if(input >= 'A' && input <= 'Z'){
        cout<<"大写字母"<<endl;
    }
    else{
        cout<<"其他字符"<<endl;
    }
    return 0;
}