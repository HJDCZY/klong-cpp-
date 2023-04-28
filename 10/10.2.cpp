#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream file;
    file.open("file1.txt", ios::in);
    if (!file)
    {
        cout<< "读取错误"<<endl;
    }
    string str;
    file >> str;
    cout<<str<<endl;
    return 0;
}