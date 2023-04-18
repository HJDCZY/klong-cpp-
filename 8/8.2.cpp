#include<iostream>
#include<string>
using namespace std;

class circle{
    private:
        double radius;
    public:
        circle(double radius){
            this->radius = radius;
        }
        double getArea(){
            return 3.14 * radius * radius;
        }
};

class table{
    private:
        string color;
        double height;
    public:
        string getcolor(){
            return color;
        }
        double getheight(){
            return height;
        }
        table(string color,double height){
            this->color = color;
            this->height = height;
        }
};

class roundtable: public circle, public table{
    private:
    public:
    roundtable(double radius,double height, string color): circle(radius), table(color, height){};
};

int main(){
    roundtable rt(5,5,"red");
    cout << rt.getArea() << endl;
    cout << rt.getcolor() <<endl;
    cout << rt.getheight() <<endl;
    return 0;
}