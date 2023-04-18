#include<iostream>
#include<string>
using namespace std;

class person
{
private:
public:
    class student{
        private:
            int ID;
            string name;
            int classes;
            int grade;
        public:
            student(int ID, string name, int classes, int grade){
                this->ID = ID;
                this->name = name;
                this->classes = classes;
                this->grade = grade;
            }
            void show(){
                cout << "ID: " << ID << endl;
                cout << "姓名: " << name << endl;
                cout << "班级: " << classes << endl;
                cout << "年级: " << grade << endl;
            }
    };
    class teacher{
        private:
            int ID;
            string name;
            string depart;
            string title;
        public:
            teacher(int ID, string name, string depart, string title){
                this->ID = ID;
                this->name = name;
                this->depart = depart;
                this->title = title;
            }
            void show(){
                cout << "ID: " << ID << endl;
                cout << "姓名: " << name << endl;
                cout << "部门: " << depart << endl;
                cout << "职称: " << title << endl;
            }
            
    };
};

int main(){
    person::student stu(1, "张三", 1, 1);
    person::teacher tea(2, "李四", "计算机", "教授");
    stu.show();
    tea.show();
    return 0;
}
