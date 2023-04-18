/*
C++海龟绘图。
由天津大学机械工程学院 智能制造与建造 8 班 蔡睿博（学号3022001179） 全程编写。
在编译时请在编译命令后加参数"-lgdi32"，（如在vs code编译，请在tasks.json文件"args"添加）。
在运行时，请在命令行输入您想要的图形序号，海龟会生成图形。
生成一个图形后，程序即结束运行，若想要停留观察等，请自行添加断点或者添加"system("pause")"。
使用头文件地址：https://github.com/walkerje/C-Turtle。
*/
#include "CTurtle.hpp"
using namespace cturtle;
using std::cout;
using std::endl;
using std::cin;

int i = 1;//绘画循环控制变量

void set(Turtle &myturtle){//归零
    myturtle.setx(0);
    myturtle.sety(0);
}

void mission1(Turtle &myturtle){//正方形
    myturtle.setx(0);
    myturtle.sety(0);
   
    for (; i <= 4; i++)
    {
        myturtle.forward(100);
        myturtle.right(90.0);
    }
   // cout<<"正方形生成完成"<<endl;
}

void mission2(Turtle &myturtle){//长方形
    set(myturtle);
    for (; i <=2 ; i++)
    {
        myturtle.forward(100);
        myturtle.right(90);
        myturtle.forward(50);
        myturtle.right(90);
    }   
}
void mission3(Turtle &myturtle){//缺个角的正方形
    set(myturtle);
    myturtle.forward(60);
    myturtle.left(90);
    myturtle.forward(30);
    myturtle.right(90);
    myturtle.forward(40);
    myturtle.right(90);
    myturtle.forward(100);
    myturtle.right(90);
    myturtle.forward(100);
    myturtle.right(90);
    myturtle.forward(70);

}

void mission4(Turtle &myturtle){//缺个边的框
    set(myturtle);
    myturtle.left(180);//朝左
    for (; i <= 3; i++)
    {
        myturtle.forward(100);
        myturtle.right(90);       
    }   
    myturtle.forward(10);
    myturtle.right(90);
    i = 1;
    for (; i <= 3; i++)
    {
        myturtle.forward(80);
        myturtle.left(90);       
    }
    myturtle.left(180);//调整朝向
    myturtle.forward(10);
    
}

void mission5(Turtle &myturtle){
    set(myturtle);
    for (; i <= 4; i++)
    {
       myturtle.forward(50);
       myturtle.right(90);
       myturtle.forward(50);
       myturtle.left(90);
       myturtle.forward(50);
       myturtle.right(90);

    }   
}

void mission6(Turtle &myturtle){
    set(myturtle);
    myturtle.goTo(50,0);
    myturtle.left(180);
    for (; i <= 4; i++)//外正方形
    {
        myturtle.forward(100);
        myturtle.right(90);

    }
    i =1;
    myturtle.penup();
    myturtle.goTo(40,10);
    myturtle.setheading(180);//右为0，逆时针为正向
    myturtle.pendown();
    for (; i <= 4; i++)
    {
        myturtle.forward(80);
        myturtle.right(90);
    }
}

void mission7(Turtle &myturtle){
    set(myturtle);
    myturtle.forward(50);
    myturtle.right(180);
    for (; i <= 4; i++)
    {
        myturtle.forward(100);
        myturtle.right(90);
    }
    i =1;
    myturtle.penup();
    myturtle.goTo(0,-20.7);
    myturtle.setheading(135);
    myturtle.pendown();
    for (; i <= 4;i++)
    {
        myturtle.forward(100);
        myturtle.right(90);
    }
}

void mission8(Turtle &myturtle){
    set(myturtle);
    myturtle.forward(60);
    myturtle.left(180);
    for (; i <= 4; i++)
    {
        myturtle.forward(60);
        myturtle.right(90);
    }
    i =1;
    myturtle.penup();
    myturtle.goTo(30,-30);
    myturtle.setheading(180);
    myturtle.pendown();
    for (; i <= 4; i++)
    {
        myturtle.forward(60);
        myturtle.right(90);
    }
}

void mission9(Turtle &myturtle){
    myturtle.left(180);
    for (; i <= 3; i++)
    {
        myturtle.forward(100);
        myturtle.right(120);
    }
}

void mission10(Turtle &myturtle){
    myturtle.left(180);
    for (; i <= 5; i++)
    {
        myturtle.forward(60);
        myturtle.right(180 - 108);

    }
    
}

void mission11(Turtle &myturtle){
    myturtle.left(180);
    for (; i <= 6; i++)
    {
        myturtle.forward(60);
        myturtle.right(60);
    }
    
}

void mission12(Turtle &myturtle){
    myturtle.left(180);
    for (; i <= 8; i++)
    {
        myturtle.forward(60);
        myturtle.right(45);

    }
    
}

void mission13(Turtle &myturtle)//圆是很多个边的多边
{
    myturtle.left(180);
    int circle = 500;
    int lenth = 2 ;
    double angle = ((circle -2)*180)/circle;
    for (; i <= circle; i++)
    {
        myturtle.forward(lenth);
        myturtle.right(180- angle);
    }
    
}

void mission14(Turtle &myturtle){
    myturtle.left(180);
    for (; i <= 8; i++)
    {
        myturtle.forward(29.29);
        myturtle.right(90);
        myturtle.forward(29.29);
        myturtle.left(45);
    }
}

void mission15(Turtle &myturtle){
    myturtle.left(180);
    double anglemin = 180- 2*(180-108);
    double anglefirst = ((180-anglemin)/2)-anglemin;
    double angleturn = 180 - anglemin;
    myturtle.right(anglefirst);
    for (; i<= 5;i++){
    myturtle.forward(100);
    myturtle.right(angleturn);
    }
}

void mission16(Turtle &myturtle){
    for (; i <= 2; i++)
    {
        myturtle.forward(65);
        myturtle.left(90);
        myturtle.forward(30);
        myturtle.left(90);
    }i =1;
    myturtle.setheading(90);
    for (; i <= 2; i++)
    {
        myturtle.forward(65);
        myturtle.left(90);
        myturtle.forward(30);
        myturtle.left(90);
    }i =1;
    myturtle.setheading(180);
    for (; i <= 2; i++)
    {
        myturtle.forward(65);
        myturtle.left(90);
        myturtle.forward(30);
        myturtle.left(90);
    }i =1;
    myturtle.setheading(270);
    for (; i <= 2; i++)
    {
        myturtle.forward(65);
        myturtle.left(90);
        myturtle.forward(30);
        myturtle.left(90);
    }i =1;
}

void mission17(Turtle &myturtle){
    int angle = 0;
    int u;
    for (; i <= 6 ; i++)//画三角
    {
        u = 1;
        for (; u <= 3; u++)//三角形的边
        {
            myturtle.forward(60);
            myturtle.left(120);
        }       
        myturtle.left(60);
    }
}

void mission18(Turtle &myturtle){
    int angle = 0;
    int x =0;
    int y =0;
    int u =1;
    for (; u <= 4; u++)//图形
    {
        for (; i <= 3; i++)
        {
            if(i == 1&& u ==1){
                myturtle.left(180);//转正起始方向
            }
            myturtle.forward(100);
            myturtle.right(90);       
        }   
        myturtle.forward(10);
        myturtle.right(90);
        i = 1;
        for (; i <= 3; i++)
        {
            myturtle.forward(80);
            myturtle.left(90);       
        }
        myturtle.left(180);//调整朝向
        myturtle.forward(10);
        i =1;
        switch (u){
            case 1:
                x = -100;
                y = 100;
                break;
            case 2:
                x = -200;
                y = 0;
                break;
            case 3:
                x = -100;
                y = -100;
                break;
        }
        myturtle.penup();
        myturtle.goTo(x,y);//first:-100,100
        myturtle.pendown();
    }
}

void mission19(Turtle &myturtle){
    int time = 1;
    int x =0;
    int y =0;
    for (; time <= 4; time++)//四个图形
    {
        for (; i <= 4; i++)
        {
            myturtle.forward(30);
            myturtle.right(90);
            myturtle.forward(30);
            myturtle.left(90);
            myturtle.forward(30);
            myturtle.right(90);
        }   
        i =1;
        switch (time)
        {
        case 1:
            x = -60;
            y = -30;
            break;
        case 2:
            x = -30;
            y = -90;
            break;
        case 3:
            x = 30;
            y = -60;
            break;
        }
        myturtle.penup();
        myturtle.goTo(x,y);
        myturtle.pendown();
    }   
}

void mission20(Turtle &t){
    double angle = 360 / 5;
    for (; i <= 5 ; i++)
    {
        if (i ==1)
        {
            t.left(90);
        }
        t.forward(30);
        t.right(90);
        for (int u = 1; u <= 3; u++)
        {
            t.forward(60);
            t.right(90);
        }
        t.forward(30);
        t.left(angle);
    }
    
}

void mission21(Turtle &myturtle){
    int u =1;
    int x = 0;
    int y = 0;
    for (; u <= 4; u++)//图形
    {
        for (; i <= 3; i++)
        {
            if(i == 1&& u ==1){
                myturtle.left(180);//转正起始方向
            }
            myturtle.forward(100);
            myturtle.right(90);       
        }   
        myturtle.forward(10);
        myturtle.right(90);
        i = 1;
        for (; i <= 3; i++)
        {
            myturtle.forward(80);
            myturtle.left(90);       
        }
        myturtle.left(180);//调整朝向
        myturtle.forward(10);
        i =1;
    
    switch (u)
    {
    case 1:
        x = -50;
        y = 150;
        break;
    case 2:
        x= -200;
        y = 100;
        break;
    case 3:
        x = -150;
        y = -50;
        break;
    }
    myturtle.penup();
    myturtle.goTo(x,y);
    myturtle.pendown();
    }
}

void mission22(Turtle &t){
    double angle = 360 / 8;
    t.right(90);
    int u =1;
    for ( ; i <= 8; i++)//六边形
    {
        for (; u <= 6; u++)//六边形的边
        {
            t.forward(30);
            t.left(60);

        }
        t.left(angle);
        u = 1;
    }
    
}

void mission23(Turtle &t){
    int angle = 360/10;
    t.left(90);
    int u =1;
    for (; i <= 10; i++)//形状
    {
        for (; u <= 3; u++)
        {
            t.forward(50);
            t.right(120);

        }
        u =1;//内层循环重置
        t.left(angle);
    }
    
}

//mission24
#include<math.h>
void doubletriangle(double x, double y,double angle,Turtle &t ){
    t.penup();
    t.goTo(x,y);
    t.setheading(angle);
    t.pendown();
    t.forward(30);
    t.left(120);
    t.forward(60);
    t.left(120);
    t.forward(60);
    t.left(120);
    t.forward(60);//开始下一个三角形
    t.right(120);
    t.forward(60);
    t.right(120);
    t.forward(60);
}

void mission24(Turtle &t){//边长60
    double h =(30*sqrt(3));
    doubletriangle(45, h/2 ,120.0, t);
    doubletriangle(0,h,0.0,t);
    doubletriangle(-45,h/2,60,t);
    doubletriangle(-45,-h/2,120,t);
    doubletriangle(0,-h,0,t);
    doubletriangle(45,-h/2,60,t);
}

//mission 25
void mission25(Turtle &t){
    t.left(90);
    int u = 1;
    double angle = 180-(1080/8);
    for (; i <= 8; i++)//图形
    {
        for (; u <= 2; u++)
        {
            t.forward(20);
            t.right(90);
            t.forward(50);
            t.right(90);
        }
        t.forward(20);
        u = 1;
        t.left(angle);
    }
}

void mission26(Turtle &t){
    int angle = 360/5;
    int u = 1;
    for (size_t i = 0; i <= 5; i++)
    {   
        t.forward(60);
        for (; u <= 2; u++ )
        {
            t.left(120);
            t.forward(120);
        }
        t.left(120);
        t.forward(60);
        u =1;
        t.right(angle);
    }
    
}

//mission27
void foursquares(int x, int y, double angle, Turtle &myturtle){
    myturtle.penup();   
    myturtle.goTo(x,y);
    myturtle.setheading(angle);
    for (i =1; i <= 4; i++)//以右下作为起始点
    {
        myturtle.pendown();
        myturtle.forward(30);
        myturtle.right(90);
        myturtle.forward(30);
        myturtle.left(90);
        myturtle.forward(30);
        myturtle.right(90);
    }   
    i =1;
}

void mission27 (Turtle &t){
    double h =30/sqrt(2);
    foursquares(60,-30,180.0,t);
    foursquares(0,0,180.0,t);
    foursquares(-30,-60,180.0,t);
    foursquares(30,-90,180,t);
    foursquares(0,0,135,t);
    foursquares(-3*h,-h,135,t);
    foursquares(-2*h,-4*h,135,t);
    foursquares(h,-3*h,135,t);
}

//mission28
void square28( double angle, Turtle &t){
    t.setheading(angle);
    t.forward(100);
    t.left(90);
    t.forward(50);
    t.left(90);
    t.forward(50);
    t.right(90);
    t.forward(50);
    t.left(90);
    t.forward(50);
    t.left(90);
    t.forward(100);
}

void mission28(Turtle &t){//原点向右
    square28(0,t);
    square28(90,t);
    square28(180,t);
    square28(270,t);
    square28(45,t);
    square28(135,t);
    square28(225,t);
    square28(315,t);
}

//mission29

void square29(double angle, Turtle &t){
    t.setheading(angle);
    double angle1 =180-( 180-72);
    for (; i <= 2; i++)
    {
        t.forward(60);
        t.left(angle1);
        t.forward(60);
        t.left(180-72);
    }   
    i =1;
}
#include<cmath>
double changeangle(double a) //a是一个角度，转换后的b是弧度
{
    double b;
    b = a * 3.1415926/180;
    return b;
}

void mission29(Turtle &t){
    square29(360-18,t);
    square29(18,t);
    square29(18+36,t);
    square29(90,t);
    square29(90+36,t);
    square29(90+72,t);
    square29(90+108,t);
    square29(270-36,t);
    square29(270,t);
    square29(270+36,t);
    i = 1;
    int r = 120 * cos(changeangle(36.0));
    t.goTo(0,-r);
    t.setheading(18);
    for (; i <= 10; i++)
    {
        t.forward(60);
        t.left(180-144);
    }
    
}

//missino30
void square30(int angle, Turtle &t){
    t.setheading(angle);
    for (; i <= 2; i++)
    {
        t.forward(60);
        t.left(60);
        t.forward(60);
        t.left(120);
    }
    i =1;
}

void mission30(Turtle &t){
    int angle = 30;
    for (int u=1; u <= 6; u++)
    {
        
        square30(angle,t);
        angle += 60;
    }
    t.penup();
    t.goTo(0,-120);
    t.setheading(30);
    t.pendown();
    for ( i = 1; i <= 6; i++)
    {
        t.forward(120);
        t.left(60);
    }
    
}

void mission31(Turtle &t){
    t.forward(90);
    t.left(90);
    t.forward(80);
    t.left(90);
    t.forward(70);
    t.left(90);
    t.forward(90);
    t.left(90);
    t.forward(80);
    t.left(90);
    t.forward(70);
    t.left(90);
    t.forward(90);
    t.left(90);
    t.forward(80);
    t.left(90);
    t.forward(70);
    t.left(90);
    t.forward(90);
    t.left(90);
    t.forward(80);
    t.left(90);
    t.forward(70);
}
//mission32
void square32(double x , double y, double angle , Turtle &t){
    t.penup();
    t.goTo(x,y);
    t.setheading(angle);
    t.pendown();
    for (; i <= 2; i++)
    {
        t.forward(50);
        t.left(45);
        t.forward(50);
        t.left(135);
    }
    i = 1;  
}

void mission32 (Turtle &t){
    square32(0,0,0,t);
    square32(0,0,45,t);
    square32(0,0,90,t);
    square32(0,0,135,t);
    square32(0,0,180,t);
    square32(0,0,225,t);
    square32(0,0,270,t);
    square32(0,0,315,t);
    square32(50+50*sqrt(2),0,90,t);
    square32(50+25*sqrt(2),50+25*sqrt(2),135,t);
    square32(0,50+50*sqrt(2),180,t);
    square32(-(50+25*sqrt(2)),50+25*sqrt(2),225,t);
    square32(-(50+50*sqrt(2)),0,270,t);
    square32(-(50+25*sqrt(2)),-(50+25*sqrt(2)),315,t);
    square32(0,-(50+50*sqrt(2)),0,t);
    square32(50+25*sqrt(2),-(50+25*sqrt(2)),45,t);
}

//mission33
void s33(int angle, Turtle &t){
    t.setheading(angle);
    t.forward(50);
    t.left(90);
    t.forward(100);
    t.left(90);
    t.forward(10);
    t.left(90);
    t.forward(90);
    t.right(90);
    t.forward(80);
    t.right(90);
    t.forward(90);
    t.left(90);
    t.forward(10);
    t.left(90);
    t.forward(100);
    t.left(90);
    t.forward(50);
}

void mission33(Turtle &t){
    s33(270,t);
    s33(0,t);
    s33(90,t);
    s33(180,t);
    s33(315,t);
    s33(45,t);
    s33(135,t);
    s33(225,t);
}
//mission34
void s34(int x, int y, int angle,Turtle &t){
    t.penup();
    t.goTo(x,y);
    t.setheading(angle);
    t.pendown();
    t.forward(60);
    t.right(90);
    t.forward(30);
    t.left(90);
    t.forward(30);
    t.left(90);
    t.forward(30);
    t.right(90);
    t.forward(30);
    t.left(90);
    t.forward(60);
    t.left(90);
    t.forward(30);
    t.right(90);
    t.forward(30);
    t.left(90);
    t.forward(60);
    t.left(90);
    t.forward(60);
    t.right(90);
    t.forward(30);
    t.left(90);
    t.forward(30);
}

void mission34(Turtle &t){
    s34(0,0,0,t);
    s34(-90,30,0,t);
    s34(0,0,180,t);
    s34(90,-30,270,t);
}
//mission35
void s35_1(int h , Turtle &t){//菱形
    t.setheading(h);
    for (; i <= 2; i++)
    {
        t.forward(60);
        t.left(60);
        t.forward(60);
        t.left(120);
    }
    i =1;
}

void s35_2(int x,int y, int h ,Turtle &t){//六边形
    i = 1; 
    t.penup();
    t.goTo(x,y);
    t.setheading(h);
    t.pendown();
    for (; i <= 6; i++)
    {
        t.forward(120);
        t.left(60);
    }
    i =1;
    
}

void mission35(Turtle &t){
    i =1;
    int h =0;
    for (int u =1; u <= 12; u++)
    {
        s35_1(h,t);
        h +=30;
    }
    s35_2(-60,-(60*(sqrt(3))),0,t);
    s35_2(0,-120,30,t);
}

//mission36

void s36(int h , Turtle &t){
    t.setheading(h);
    for (i =1; i <= 2; i++)
    {
        t.forward(30);
        t.left(45);
        t.forward(30);
        t.left(135);
    }
    
}

void mission36(Turtle &t){
    int h =0;
    for (int u = 1; u <= 8; u++)
    {
        s36(h,t);
        h +=45;
    }
    //第二部分
    t.penup();
    t.goTo(0,-(60+30*sqrt(2)));
    t.setheading(90);
    t.pendown();
    for (int u = 0; u <= 8; u++)
    {
        t.forward(30);
        t.right(45);
        t.forward(30);
        t.right(45);
        t.forward(30);
        t.right(45);
        t.forward(30);
        t.left(180);

    }
    t.penup();
    //第三部分
    t.goTo(-(30+30/sqrt(2)),-(60+30*sqrt(2)+30/sqrt(2)));
    t.setheading(45);
    t.pendown();
    for (int u = 1; u <= 8 ; u++)
    {
        t.forward(30);
        t.right(45);
        t.forward(60);
        t.right(45);
        t.forward(30);
        t.left(135);        
    }
    //第四部分
    t.penup();
    t.goTo(-(30+30/sqrt(2)),-(60+30*sqrt(2)+30/sqrt(2)));
    t.setheading(0);
    t.pendown();
    for (int u =1; u <= 8; u++)
    {
        t.forward(30);
        t.right(45);
        t.forward(30);
        t.left(90);
        t.forward(30);
        t.right(45);
        t.forward(30);
        t.left(45);
    }
}
//mission37

void s37(int x, int y, int h, Turtle &t){
    t.penup();
    t.goTo(x,y);
    t.setheading(h);
    t.pendown();
    t.forward(40);
    t.left(90);
    t.forward(60);
    t.right(90);
    t.forward(80);
    t.right(90);
    t.forward(100);
    t.right(90);
    t.forward(120);
    t.right(90);
    t.forward(40);
}

void mission37(Turtle &t){
    s37(0,0,0,t);
    s37(40,0,90,t);
    s37(40,40,180,t);
    s37(0,40,270,t);
}
//mission38
void s38(int dangle, Turtle &t){
    t.penup();
    t.goTo(0,0);
    t.setheading(dangle);
    t.forward(100);//一半对角线
    t.left(135);
    t.pendown();
    int a = (200 / sqrt(2));//边长
    i = 1;
    for ( i = 1; i <= 4; i++)
    {
        t.forward(a);
        t.left(90);
    }
}

void mission38(Turtle &t){
    int angle = 5;
    for (int u = 1; u <= 9; u++)
    {
        s38(angle,t);
        angle += 10;
    }
}
//mission39

void s39(int h,Turtle &t){
    t.setheading(h);
    t.forward(70);
    t.left(90);
    t.forward(70);
    t.left(90);
    t.forward(10);
    t.left(90);
    t.forward(10);
    t.left(90);
    t.forward(10);
    t.left(180);
    t.forward(60);
    t.right(90);
    t.forward(10);
    t.left(180);
    t.forward(60);
    t.left(90);
    t.forward(60);
    t.left(180);
    t.forward(10);
    t.right(90);
    t.forward(60);
    t.left(90);
    t.forward(60);
    t.left(90);
    t.forward(70);
}

void mission39(Turtle &t){
    s39(0,t);
    s39(90,t);
    s39(180,t);
    s39(270,t);
}

void s40(int h, Turtle &t){//分割为8个旋转体
    //右半部分
    t.penup();
    t.goTo(0,0);
    t.setheading(h);
    t.pendown();
    t.forward(30);
    t.left(90);
    t.forward(30);
    t.right(45);
    t.forward(30);
    t.right(90);
    t.forward(30);
    t.left(90);
    t.forward(30);
    t.left(90);
    t.forward(30);
    t.right(135);
    t.forward(30);
    t.right(90);
    t.forward(30);
    //左半部分
    t.penup();
    t.goTo(0,0);
    t.setheading(h+45);
    t.pendown();
    t.forward(30);
    t.right(90);
    t.forward(30);
    t.left(45);
    t.forward(30);
    t.left(90);
    t.forward(30);
    t.right(90);
    t.forward(30);
    t.right(90);
    t.forward(30);
    t.left(135);
    t.forward(30);
    t.left(90);
    t.forward(30);
}

void mission40(Turtle &t){
    int angle = 0;
    for ( i = 1; i <= 8; i++)
    {
        s40(angle,t);
        angle += 45;
    }
    
}

int main(int argc, char** argv){
    TurtleScreen screen;
    screen.bgcolor({"white"});//设置背景，给turtle赋值

    Turtle myturtle(screen);//设置turtle,初始化
    myturtle.pencolor({"black"});
    myturtle.speed(TS_FASTEST);

    myturtle.hideturtle();
    myturtle.pendown();//开始画

    int input = 0;
    cout<<"请输入您想画的序号：";
    cin>>input;

    switch (input)//执行
    {
    case 1:
        mission1(myturtle);
        break;
    case 2:
        mission2(myturtle);
        break;
    case 3:
        mission3(myturtle);
        break;
    case 4:
        mission4(myturtle);
        break;
    case 5:
        mission5(myturtle);
        break;
    case 6:
        mission6(myturtle);
        break;
    case 7:
        mission7(myturtle);
        break;
    case 8:
        mission8(myturtle);
        break;
    case 9 :
        mission9(myturtle);
        break;
    case 10:
        mission10(myturtle);
        break;
    case 11:
        mission11(myturtle);
        break;
    case 12:
        mission12(myturtle);
        break;
    case 13:
        mission13(myturtle);
        break;
    case 14:
        mission14(myturtle);
        break;
    case 15:
        mission15(myturtle);
        break;
    case 16:
        mission16(myturtle);
        break;
    case 17:
        mission17(myturtle);
        break;
    case 18:
        mission18(myturtle);
        break;
    case 19:
        mission19(myturtle);
        break;
    case 20:
        mission20(myturtle);
        break;
    case 21:
        mission21(myturtle);
        break;
    case 22:
        mission22(myturtle);
        break;
    case 23:
        mission23(myturtle);
        break;
    case 24:
        mission24(myturtle);
        break;
    case 25:
        mission25(myturtle);
        break;
    case 26:
        mission26(myturtle);
        break;
    case 27:
        mission27(myturtle);
        break;
    case 28:
        mission28(myturtle);
        break;
    case 29:
        mission29(myturtle);
        break;
    case 30:
        mission30(myturtle);
        break;
    case 31:
        mission31(myturtle);
        break;
    case 32:
        mission32(myturtle);
        break;
    case 33:
        mission33(myturtle);
        break;
    case 34:
        mission34(myturtle);
        break;
    case 35:
        mission35(myturtle);
        break;
    case 36:
        mission36(myturtle);
        break;
    case 37:
        mission37(myturtle);
        break;
    case 38:
        mission38(myturtle);
        break;
    case 39:
        mission39(myturtle);
        break;
    case 40:
        mission40(myturtle);
        break;
    default:
        cout<<"您输入的序号不正确，请检查"<<endl;
        break;
    }

        return 0;
}