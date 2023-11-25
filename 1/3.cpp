#include <iostream>
using namespace std;

int main(){
    int input = 0;
    cin >> input;
    //将输入的三位数input分成三行输出
    cout << input % 10 << endl;
    cout << input / 10 % 10 << endl;
    cout << input / 100 << endl;
    

    return 0;
}