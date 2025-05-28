#include<stdio.h>
#include<raylib.h>
#include"Book.h"
#include"User.h"
#include"Menu.h"


//图书馆管理系统
int main() {
	InitWindow(800, 600, "Library Management System");
	SetTargetFPS(60); // 设置帧率为60帧每秒
	while(!WindowShouldClose()) { // 检查窗口是否关闭
		BeginDrawing(); // 开始绘制
		ClearBackground(RAYWHITE); // 清除背景为白色
		EndDrawing(); // 结束绘制
	}	CloseWindow(); // 关闭窗口
	return 0;
}