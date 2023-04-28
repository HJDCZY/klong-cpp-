#include <fstream>
using namespace std;

int n_(int num){
    //求n阶乘
    int sum = 1;
    for (int i = 1; i <= num; i++)
    {
        sum *= i;
    }
    return sum;

}

int main(){
    fstream data;
    data.open("data.dat",ios::app|ios::out);
    for (int i = 1; i <= 10; i++)
    {
        int sum = n_(i);
        data << i<<"!=";
        data <<sum <<endl;
    }
    return 0;
}