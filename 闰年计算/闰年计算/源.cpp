#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 1000;
	while (n <= 2000)
	{
		if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)


			printf("%d��������\n", n);
		n++;
	}
		return 0;

}

	/*int i;
	scanf("%d", &i);
	if (i % 4 == 0)
	{
		if (i % 100 != 0)
			printf ("%d������\n", i);

	}

	if (i % 400 == 0)
	{
		printf("%d������\n", i);
	}

	return 0;
}*/