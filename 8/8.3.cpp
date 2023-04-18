#include<iostream>
#include<string>
using namespace std;

class father
{
    private:
        
    public:
        string name;
        father(string name);
        ~father(){};
};

father::father(string name)
{
    this->name = name;
}

class mother{
    private:
        
    public:
    string name;
    mother(string name){
        this->name = name;
    }
};

class child : public father ,public mother{
    private:
        string name;
    public:
        child(string name, string fathername, string mothername):father(fathername),mother(mothername){};
        void showindex();
};


void child::showindex()
{//此处需要把name放在public下才能访问
    cout << "父亲的名字是 " << father::name << endl;
    cout << "母亲的名字是 " << mother::name << endl;
}

int main(){
    child steve("steve","lua","cpp") ;
    steve.showindex();
    return 0;
}