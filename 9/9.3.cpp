#include<iostream>
#include<string.h>
using namespace std;

//重载+=,实现字符串的连接
class str{
    private:
    public:
        char s[30] = "\0";
        str(char s[30]){
            strcpy(this->s,s);
        }
        char* operator+=(str &s2){
            // cout<<this->s<<endl;
            char s3[30] = "\0";
            strcat(s3,this->s);    
            // cout<<s3<<endl;    
            //把s2的内容复制到s3的后面
            strcat(s3,s2.s);
            // cout<<s3<<endl;
            //把s2.s的内容复制到this->s
            strcat(this->s,s2.s);
            return this->s;
        }
};

int main(){
    str s1("hello ");
    str s2("world");
    cout<<(s1+=s2)<<endl;
    cout<<s1.s<<endl;
    return 0;
}