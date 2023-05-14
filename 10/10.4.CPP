#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void divide(const string &str, string &number, string &letter, string &rest){
    //将str中的数字和字母分开，分别存储在munber和letter中
    number.clear();
    letter.clear();

    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        //使用string类重载的运算符追加字符
        if (str[i] >= '0' && str[i] <= '9')
        {
            number += str[i];
        }
        else if ((str[i]>='a' && str[i]<= 'z')||(str[i] >= 'A' && str[i] <= 'Z'))
        {
            letter += str[i];
        }
        else{
            rest += str[i];
        }
    }
}

int main(){
    string str;
    //从键盘输入一行字符串
    getline(cin,str);
    string number,letter,rest;
    divide(str,number,letter,rest);
    fstream numberfile, letterfile,restfile;
    numberfile.open("num.txt",ios::out);
    letterfile.open("letter.txt",ios::out);
    restfile.open("rest.txt",ios::out);

    numberfile << "数字："<<number <<endl;
    letterfile << "字母:" << letter << endl;
    restfile << "其他字符:"<< rest <<endl;

    numberfile.close();
    letterfile.close();
    restfile.close();

    return 0;
}