#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	union Un
	{
		char c;
		int i;
	}u;
    printf("%d\n", sizeof(u));
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	return 0;
}