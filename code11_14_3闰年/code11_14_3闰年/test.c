#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void year(int input)
{
	if (input % 4 == 0 && input % 100 != 0 || input % 400 == 0)
		printf("%d是闰年\n", input);
	else
		printf("%d不是闰年", input);
}

int main()
{
	int input = 0;
	printf("请输入年份\n");
	scanf("%d", &input);
	year(input);

	return 0;
}