#define  _CRT_SECoooURE_NO_WARNINGS
#include <stdio.h>
int nul(int row)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= i; j++)
		{
			ret = i*j;
			printf("%d*%d=%d  ", i, j, ret);
		}
		printf("\n");
	}
}
int main()
{
	int row = 0;
	printf("输入一个值\n");
	scanf_s("%d", &row);
	nul(row);
	system("pause");
	return 0;
}