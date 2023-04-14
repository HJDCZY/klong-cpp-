#include<iostream>
//后面会调用boolalpha,所以要包含这个头文件
#include<iomanip>
using namespace std;

class Integer
{
private:
    int d;
public:
    Integer(int d = 0){
        this->d = d;
        cout<<"构造函数被调用"<<endl;
    };
    // ~Integer();
    int getD()
    {
        return this->d;
    }
    void setD(int d)
    {
        this->d = d;
    }
    bool IsOdd()
    {
        if (this->d % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool IsPrime()
    {
        if (this->d == 1)
        {
            return false;
        }
        for (int i = 2; i < this->d; i++)
        {
            if (this->d % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main(){
    Integer a(15);
    Integer b(31);
    //测试这个类的各个函数
    cout << "a的值为：" << a.getD() << endl;
    cout << "b的值为：" << b.getD() << endl;
    cout << "a是否为偶数：" <<boolalpha<< a.IsOdd() << endl;
    cout << "b是否为偶数：" <<boolalpha<< b.IsOdd() << endl;
    cout << "a是否为素数：" <<boolalpha<< a.IsPrime() << endl;
    cout << "b是否为素数：" <<boolalpha<< b.IsPrime() << endl;
    return 0;
}
