#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数法求斐波那契数
int fab1(int n)
{
	int fn = 0;
	int i = 0;
	int fn1 = 1;
	int fn2 = 1;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	for (i = 3; i <= n; i++)
	{
		fn = fn1 + fn2;//第三项等于前两项之和
		fn1 = fn2;
		fn2 = fn;
	}
	return fn;
}
//递归法求斐波那契数
int fab2(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return fab2(n - 1) + fab2(n - 2);//逐层展开
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fab1(n));
	printf("%d\n", fab2(n));
	return 0;
}