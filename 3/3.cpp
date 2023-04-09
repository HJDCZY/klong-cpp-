#include<iostream>
using namespace std;

int main(){
    //5个变量统计次数
    char input ;
    int a=0 , e=0, i=0,o=0,u =0;
    do//输入
    {
        cin>>input;
        switch (input)
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }
    } while (input != '#');
    int sum = a+e+i+o+u;
    cout<<"a的个数是："<<a<<endl;
    cout<<"e的个数是："<<e<<endl;
    cout<<"i的个数是："<<i<<endl;
    cout<<"o的个数是："<<o<<endl;
    cout<<"u的个数是："<<u<<endl;
    cout<<"元音字母总个数是："<<sum<<endl;
    return 0;
}