#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����һ���Ǹ����������������������֮��
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