#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>
void menu()
{
	printf("***************************\n");
	printf("******  1.play  ***********\n");
	printf("******  0.exit  ***********\n");
	printf("***************************\n");
}
void game()
{
	int num = 0;
	int guess = 0;
	num = rand() % 100 + 1;//控制随机数的范围
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess < num)
			printf("猜小了\n");
		else if (guess>num)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//rand前须引用srand
	do
	{
		menu();//菜单函数
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)//对游戏开始 退出的选择
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);//输入为真一直循环
	return 0;
}

