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
		
		printf("����������\n");
		scanf("%d", &input);
		if (input==password)
		{
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if (i == 3)
	printf("������������˳�\n");
	else
		printf("������ȷ\n");
	return 0;
}
