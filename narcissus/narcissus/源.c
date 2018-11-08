#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int i;
	int a, b, c;
	for (i = 100; i <= 999; i++)
	{
		a = i % 10;
		b = i / 100;
		c = i / 10 % 10;
		if (i == a*a*a + b*b*b + c*c*c)
			printf("%d\n", i);
	}

	return 0;





}