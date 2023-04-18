#include<iostream>
#include<string>
using namespace std;

class human{
    private:
        string name;
        bool gender;
        int age;
        string job;
    public:
        human(string name = "null",bool gender = true,int age = 0,string job = "null"){
            this->age = age;
            this->gender = gender;
            this->name = name;
            this->job = job;
        }
        void show(string index){
            //因为是string,不能用switch，只能用if
            if(index == "name"){
                cout << "name: " << this->name << endl;
            }
            else if (index == "age"){
                cout << "age: " << this->age << endl;
            }
            else if(index == "job"){
                cout << "job: " << this->job << endl;
            }
            else if (index == "gender"){
                if(this->gender == true){
                    cout<<"male"<<endl;
                }
                else{
                    cout<<"female"<<endl;
                }
            }
        }
        void showall(){
            //显示所有
            cout << "name: " << this->name << endl;
            cout << "age: " << this->age << endl;
            cout << "job" << this->job << endl;
            cout << "gender:" ;
            if(this->gender == true){
                cout<<"male"<<endl;
            }
            else{
                cout<<"female"<<endl;
            }
        }
};

class student : public human{
    private:
        string school;
        string major;
        int grade;
    public:
    student(){};
        void setschool(string school){
            this->school = school;
            cout << "school has been set: " << this->school << endl;
        }
        void setmajor(string major){
            this->major = major;
            cout << "major has been set: " << this->major << endl;
        }
        void setgrade(int grade){
            this->grade = grade;
            cout << "grade has been set: " << this->grade << endl;
        }

        void showall(){//显示所有
            cout << "school" << this->school << endl;
            cout << "major" << this->major << endl;
            cout << "grade" << this->grade << endl;

        }
};

int main(){
    human a("zhangsan",true,20,"student");
    a.showall();
    a.show("name");
    a.show("age");
    cout<<"-----------------"<<endl;
    student b;
    b.setschool("xidian");
    b.setmajor("computer");
    b.setgrade(3);
    //显示对象b，student类的所有数据
    b.showall();
    cout<<"-----------------"<<endl;
    //显示对象b，human类的所有数据
    b.human::showall();
}