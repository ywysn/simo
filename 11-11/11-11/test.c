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
	num = rand() % 100 + 1;//����������ķ�Χ
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess < num)
			printf("��С��\n");
		else if (guess>num)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//randǰ������srand
	do
	{
		menu();//�˵�����
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)//����Ϸ��ʼ �˳���ѡ��
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);//����Ϊ��һֱѭ��
	return 0;
}

