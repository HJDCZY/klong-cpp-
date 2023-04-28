//打开一个filel.txt文件，用户在键盘上输入一行字符串，将该字符串写入到filel.txt文件中。
//如果filel.txt文件不存在，则创建该文件，如果文件存在，则在文件末尾追加该字符串。
//如果写入成功，则输出“写入成功”，否则输出“写入失败”。
//使用fstream类的成员函数open()打开文件，使用成员函数close()关闭文件。

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream outfile;
    outfile.open("file1.txt", ios::app);
    if (!outfile)
    {
        cout << "错误!" << endl;
        return 0;
    }
    string str;
    cout << "输入一个字符串:" << endl;
    getline(cin, str);
    outfile << str << endl;
    outfile.close();
    return 0;
}