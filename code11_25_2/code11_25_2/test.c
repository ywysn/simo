#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//输入一个非负整数，返回组成它的数字之和
int Digitsum(int n)
{
	if (n < 10)
	{
		return n;
	}
	return n % 10 + Digitsum(n / 10);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", Digitsum(n));
	return 0;
}