#include <iostream>
using namespace std;

int main(){
    int id = 1;
    int grade = 0;
    //根据输入的分数输出等级和学号
    
    do{
        cin >> grade;
        if (grade > 100){
            cout << "输入错误" << endl;
            continue;
        }
        else if(grade >= 90){
            cout << id << " A" << endl;
        }
        else if (grade >= 80){
            cout << id << " B" << endl;
        }
        else if (grade >= 60){
            cout << id << " C" << endl;
        }
        else {
            cout << id << " D" << endl;
        }
        id++;
    }while(id <= 10);
    return 0;
}