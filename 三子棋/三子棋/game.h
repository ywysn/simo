#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL],int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
static int is_full(char board[ROW][COL], int row, int col);
char Is_win(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char Is_win(char board[ROW][COL], int row, int col);
void menu();
void game();
void test();
