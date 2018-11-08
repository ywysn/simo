#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int c;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d", a, b);
//    return 0;
//
//}


//int main()
//{
//	int a = 5;
//	int b = 8;
//	int *p=0;
//	b = *p;
//	*p = &a;
//	a = b;	
//	printf("a=%d,b=%d", a, b);
//	return 0;
//
//}


int main()
{
	int i;
	int max = 0;
	for (i = 0; i <= 10, i++)
	{
		if (i < max)
			max = i;
	}
	printf("max=%d\n", max);
	return 0;
}