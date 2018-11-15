#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x = 5;
	int y = 3;
	int z = 9;
	int c = 0;
	if (x > y)
	{
		c = x;
		x = y;
		y = c;
	}
	if (x > z)
	{
		c = z;
		z = x;
		x = c;
	}
	if (y > z)
	{
		c = z;
		z = y;
		y = c;
	}
	printf("%d %d %d", x, y, z);
		
	return 0;
}