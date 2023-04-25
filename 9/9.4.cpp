#include<iostream>
#include<string.h>
using namespace std;

class str{
    public:
        char s[30];
        str(char* s){
            strcat(this->s,s);
        }
        friend char* operator+=(str &s1 , str &s2) {
            strcat(s1.s,s2.s);
            return s1.s;
        }
};

int main(){
    str s1("hello ");
    str s2("world");
    cout<<(s1+=s2)<<endl;
    cout<<s1.s<<endl;
    return 0;
}