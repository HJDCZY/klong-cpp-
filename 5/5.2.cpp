#include<iostream>
#include<string>
using namespace std;
//统计输入的一串字符串中数字字符的百分比
double statistics(string str,char a);

int main(){
    string str;
    cout<<"请输入一串字符串：";
    cin>>str;
    int count = 0;//数字个数
    char number = '0';
    for (; number <= '9'; number++)
    {
        count += statistics(str,number);
    }
    cout<<"数字所占百分比为：";
    cout<<((double)count/str.length())*100<<"%"<<endl;
}

double statistics(string str,char a){
    int len = str.length();
    int count;
    for (int i = 0; i <= len; i++)
    {
        if (str[i]==a){
            count++;
        }
    }
    return count;
}