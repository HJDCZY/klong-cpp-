#include<iostream>
using namespace std;

class n_{
    private:
        int n;
    public:
        n_(int n){
            this->n = n;
        }
        int n__(){
            //求阶乘
            int sum = 1;
            for (int i = 1; i <= this->n; i++)
            {
                sum *= i;
            }
            return sum;
        }
};

int main(){
    //编写一个对象数组，用上面的类求2~9的阶乘
    n_ a[8] = {n_(2),n_(3),n_(4),n_(5),n_(6),n_(7),n_(8),n_(9)};
    for (int i = 0; i < 8; i++)
    {
        cout << a[i].n__() << endl;
    }
    return 0;
}