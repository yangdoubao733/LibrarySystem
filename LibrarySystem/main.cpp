#include<stdio.h>
#include<raylib.h>
#include"Book.h"
#include"User.h"
#include"Menu.h"


//ͼ��ݹ���ϵͳ
int main() {
	InitWindow(800, 600, "Library Management System");
	SetTargetFPS(60); // ����֡��Ϊ60֡ÿ��
	while(!WindowShouldClose()) { // ��鴰���Ƿ�ر�
		BeginDrawing(); // ��ʼ����
		ClearBackground(RAYWHITE); // �������Ϊ��ɫ
		EndDrawing(); // ��������
	}	CloseWindow(); // �رմ���
	return 0;
}