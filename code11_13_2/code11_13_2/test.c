#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	int password = 123456;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		
		printf("请输入密码\n");
		scanf("%d", &input);
		if (input==password)
		{
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	if (i == 3)
	printf("三次输入错误，退出\n");
	else
		printf("输入正确\n");
	return 0;
}
