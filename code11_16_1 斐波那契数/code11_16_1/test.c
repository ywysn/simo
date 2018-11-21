#include<stdio.h>
int fib(int n)
{
	int count = 0;
	if (n == 3);
	count++;
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = 0;
	ret=fib(n);
	printf("%d ", ret);
	return 0;
}
