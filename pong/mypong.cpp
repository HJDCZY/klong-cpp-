#include<iostream>
#include "raylib.h"
#include <stdlib.h>
using namespace std;
//定义一些全局变量
int screenWidth = 1080;
int screenHeight = 800;
int difficulty = 5;
char score1[] = "0";
char score2[] = "0";

    int paddle1_xPos = 10;
    int paddle1_yPos = screenHeight / 2 - 50;
    int paddle1_width = 10;
    int paddle1_height = 100;
    int paddle1_ySpeed = 5;
    //球拍2的位置
    int paddle2_xPos = screenWidth - 20;
    int paddle2_yPos = screenHeight / 2 - 50;
    int paddle2_width = 10;
    int paddle2_height = 100;
    int paddle2_ySpeed = 10;
    //球的位置
    int ball_xPos = screenWidth / 2;
    int ball_yPos = screenHeight / 2;
    int ball_xSpeed = 0;
    int ball_ySpeed = rand() % 10 == 0 ? 10 : rand() % 10;
bool game = false;

void init(){
    //进行一局新游戏的时候，初始化一些变量
    paddle1_xPos = 10;
    paddle1_yPos = screenHeight / 2 - 50;
    paddle1_width = 10;
    paddle1_height = 100;
    paddle1_ySpeed = 5;
    //球拍2的位置
    paddle2_xPos = screenWidth - 20;
    paddle2_yPos = screenHeight / 2 - 50;
    paddle2_width = 10;
    paddle2_height = 100;
    paddle2_ySpeed = 5;
    //球的位置
    ball_xPos = screenWidth / 2;
    ball_yPos = screenHeight / 2;
    ball_xSpeed = 0;
    //球的速度是随机的
    ball_ySpeed = rand() % 10 == 0 ? 10 : rand() % 10;
    //电脑的速度，由难度决定，在区间内随机
    paddle2_ySpeed = rand() % difficulty + 3;
    
}

void update(){
    //游戏进行时

    while (game)
    {
        //绘制
        BeginDrawing();
		cout<<"draw game"<<endl;
        for (int i = 0; i < screenHeight; i += 20)
        {
            DrawRectangle(screenWidth / 2 - 1, i, 2, 10 , GRAY);
        }
        //绘制球拍1
        DrawRectangle(10, paddle1_yPos, 10, 100, WHITE);
        //绘制球拍2
        DrawRectangle(screenWidth - 20, paddle2_yPos, 10, 100, WHITE);
        //绘制比分,比分是变量
        DrawText(score1, screenWidth / 2 - 50, 50, 50, WHITE);
        DrawText(score2, screenWidth / 2 + 50, 50, 50, WHITE);
        //绘制球
        DrawCircle(ball_xPos, ball_yPos, 10, WHITE);
		EndDrawing();
        //球的移动
        ball_xPos = ball_xPos + ball_xSpeed;
        ball_yPos = ball_yPos + ball_ySpeed;
        //球碰到上下边界，反弹
        if (ball_yPos < 0 || ball_yPos > screenHeight)
        {
            ball_ySpeed = -ball_ySpeed;
        }
        //球碰到左右边界，得分
        //碰到左边界，1号玩家得分
        if (ball_xPos < 0)
        {
            //得分
            score1[0]++;
            init();
            //绘制
            game = false;
        }
        //碰到右边界，2号玩家得分
        if (ball_xPos > screenWidth)
        {
            //得分
            score2[0]++;
            init();
            game = false;
        }
        //球拍1的移动
        //球拍1上下移动
        if (IsKeyDown(KEY_W))
        {
            paddle1_yPos = paddle1_yPos - paddle1_ySpeed;
        }
        if (IsKeyDown(KEY_S))
        {
            paddle1_yPos = paddle1_yPos + paddle1_ySpeed;
        }
        //球碰到球拍1,反弹
        if (ball_xPos < paddle1_xPos + paddle1_width && ball_xPos > paddle1_xPos && ball_yPos < paddle1_yPos + paddle1_height && ball_yPos > paddle1_yPos)
        {
            ball_xSpeed = -ball_xSpeed;
        }
        //球拍2是电脑控制
        //当球在电脑拍子上方的时候，电脑拍子向下移动,使用拍子中间的位置，而不是顶点
        if (ball_yPos < paddle2_yPos + paddle2_height / 2)
        {
            paddle2_yPos = paddle2_yPos - paddle2_ySpeed;
        }
        //当球在电脑拍子下方的时候，电脑拍子向上移动
        if (ball_yPos > paddle2_yPos + paddle2_height / 2)
        {
            paddle2_yPos = paddle2_yPos + paddle2_ySpeed;
        }

        //球碰到球拍2,反弹
        if (ball_xPos < paddle2_xPos + paddle2_width && ball_xPos > paddle2_xPos && ball_yPos < paddle2_yPos + paddle2_height && ball_yPos > paddle2_yPos)
        {
            ball_xSpeed = -ball_xSpeed;
        }
        //擦除上一次画的球
        ClearBackground(BLACK);
        
    }
    


}

//用raylib库初始化窗口
int main()
{
    InitWindow(screenWidth,screenHeight, "hello world");
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        //背景是黑色
		cout<<"draw init"<<endl;
        ClearBackground(BLACK);
        // DrawText("hello world", 100, 100, 20, WHITE);
        //绘制游戏界面，乒乓球桌
        //在屏幕中心绘制灰色虚线,循环绘制矩形代表虚线
        for (int i = 0; i < screenHeight; i += 20)
        {
            DrawRectangle(screenWidth / 2 - 1, i, 2, 10 , GRAY);
        }
        //绘制球拍
        //绘制球拍1
        DrawRectangle(10, screenHeight / 2 - 50, 10, 100, WHITE);
        //绘制球拍2
        DrawRectangle(screenWidth - 20, screenHeight / 2 - 50, 10, 100, WHITE);
        //绘制比分,比分是变量
        DrawText(score1, screenWidth / 2 - 50, 50, 50, WHITE);
        DrawText(score2, screenWidth / 2 + 50, 50, 50, WHITE);
        //绘制球
        DrawCircle(ball_xPos, ball_yPos, 10, WHITE);
        //按空格开始游戏
        //绘制开始游戏的提示
        if (ball_xSpeed == 0)
        {
            DrawText("Press Space to Start", screenWidth / 2 - 100, screenHeight / 2 - 50, 20, WHITE);
        }
        if (ball_xSpeed == 0)
        {
            if (IsKeyDown(KEY_SPACE))
            {
                //随机生成球的x方向，足够随机
                ball_xSpeed = rand() % 2 ? 5 : -5;
                game = true;
                update();
            }

        }

		EndDrawing();
    }
    return 0;
}
