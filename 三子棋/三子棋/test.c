#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void game()
{
	char ret = 0;
	//printf("玩游戏\n");
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//is_full(board, ROW, COL);
	while (1)
	{
		playermove(board, ROW, COL);
		//ret = Is_win(board, ROW, COL);
		//is_full(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_win(board, ROW, COL);
		if (ret == 'x')
		{
			printf("玩家赢\n");
			break;
		}
		else if (ret == '*')
		{
			printf("电脑赢\n");
			break;
		}
		else if (ret == 'Q')
		{
			printf("平局\n");
			break;
		}

		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (ret == 'x')
		{
			printf("玩家赢\n");
			break;
		}
		else if (ret == '*')
		{
			printf("电脑赢\n");
		}
		else if (ret == 'Q')
		{
			printf("平局\n");
		}
		//is_full(board, ROW, COL);
	}
	//ret = Is_win();
}
void menu()
{
	printf("*************************\n");
	printf("******** 1.play *********\n");
	printf("******** 0.exit *********\n");
	printf("*************************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}