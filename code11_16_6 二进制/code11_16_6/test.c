#include<stdio.h>
int main()
{
	int m = 1999;
	int n = 2299;
	int i = 0;
	int count = 0;
	i = m^n;
	while (i != 0)
	{
		if (i & 1 == 1)
			count++;
		i = i >> 1;
			
	}
	printf("%d\n", count);
	return 0;
}