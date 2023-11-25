#include <iostream>
using namespace std;

int main(){
    int time = 10000;
    //将1000秒化成小时，分，秒
    int hour = time / 3600;
    int minute = (time - hour * 3600) / 60;
    int second = time - hour * 3600 - minute * 60;
    cout << hour << "小时" << minute << "分钟" << second << "秒" << endl;
    return 0;
}