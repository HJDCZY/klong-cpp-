#include <iostream>
using namespace std;

int main(){
    int input = 0;
    cin >> input;
    int output = 0;
    if (input < 0){
        cout << input*input << endl;
    }
    else if (input == 0 ){
        cout << 0 << endl;
    }
    else{
        cout << input + 1 << endl;
    }
    return 0;
}