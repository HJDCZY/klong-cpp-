#include<iostream>
using namespace std;

//编写函数，实现从char*中删除字符,就删查找到的第一个
bool delchar(char* s1, char s2,int lenth){
    int i =0;
    while (i<=lenth)
    {
        if (s1[i]==s2)
        {//后面的元素往前挪一位
            for (int u = i; u <= lenth; u++)
            {
                s1[u]=s1[u+1];
            }
            return false;//没遍历完，就删了一个
        }
        i++;
    }
    return true;//没查到要删的元素
}
int main(){
    char a[]="123456789456789";
    int lenth = sizeof(a);
    bool result = false;
    while (!result)
    {//函数一次只删一个，这里需要多次调用
        result = delchar(a,'4',lenth);
    }
    cout<<a<<endl;
    return 0;
}