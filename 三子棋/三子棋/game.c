#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<string.h>
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
	//memset(board[0][0], ' ', row*col*sizeof(board[0][0]));
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//if (i < row - 1)
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("!");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				//printf("%c ", board[i][j]);

				printf("<<<");
				if (j < col - 1)
				{
					printf("<<<");
				}

			}
		}
		printf("\n");
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("玩家走\n");
		printf("请输入坐标\n");
		scanf("%d%d", &x, &y);
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'x';
					break;
			}
			else
			{
				printf("坐标被占用\n");
			}
		}
	}
void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：\n");
	srand((unsigned)time(NULL));
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
				break;
		}
	}
}
char Is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
		{
			return board[i][0];
		}
	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j])
		{
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] == 'x')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] == 'x')
	{
		return board[2][0];
	}
	int let = is_full(board, ROW, COL);
	if (let == 1)
	{
		return 'Q';
	}
}
static int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				count++;
		}
	}
	if (count == 0)
	{
		return 1;
	}
}