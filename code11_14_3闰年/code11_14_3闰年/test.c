#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void year(int input)
{
	if (input % 4 == 0 && input % 100 != 0 || input % 400 == 0)
		printf("%d������\n", input);
	else
		printf("%d��������", input);
}

int main()
{
	int input = 0;
	printf("���������\n");
	scanf("%d", &input);
	year(input);

	return 0;
}