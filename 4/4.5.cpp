#include<iostream>
using namespace std;

// int sum (int* ptr){
//     int sum =0;
//     for (int i = 0; i < 5; i++)
//     {
//         sum+= *(ptr+i);
//     }
//     return sum;
// }

int main(){
    int cache[3][5];
    cout<<"输入15个数，代表3行5列数组：";
    for ( int u = 0; u < 3; u++)
    {
        for (int i = 0; i < 5; i++)
        {
            cin>>cache[u][i];
        }
    }
    int sum1=0;
    for (int i = 0; i < 5; i++)
    {
        sum1+=cache[0][i];
    }
    int sum2=0;
    for (int i = 0; i < 5; i++)
    {
        sum2 +=cache[1][i];
    }
    int sum3=0;
    for (int i = 0; i < 5; i++)
    {
        sum3 +=cache[2][i];
    }
    // cout<<sum1<<sum2<<sum3<<endl;
    int maximun;
    maximun = (max(sum1,sum2)==sum1)?sum1:sum2;
    maximun = (max(maximun,sum3)==sum3)?sum3:maximun;
    int minimun;
    minimun = (min(sum1,sum2)==sum1)?sum1:sum2;
    minimun = (min(minimun,sum3)==sum3)?sum3:minimun;
    int middle = sum1+sum2+sum3-maximun-minimun;
    cout<<"从小到大输出：";
    cout<<minimun<<" "<<middle<<" "<<maximun<<endl;
    return 0;
}