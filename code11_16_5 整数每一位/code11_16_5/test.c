#include<stdio.h>
void cat(x)
{
	int a = 0;
	while (x > 9)
	{
		a = x % 10;
		x = x / 10;
		printf("%d  ", a);
	}
	if (x < 9)
		printf("%d ", x);


}
int main()
{
	int x = 0;
	printf("请输入一个数\n");
	scanf_s("%d", &x);
	cat(x);
	return 0;
}