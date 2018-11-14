#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void change(int *p, int *q)
{
	int c = 0;
	c = *p;
	*p = *q;
	*q = c;
}
int main()
{
	int a = 2;
	int b = 5;
	change(&a, &b);
	printf("a=%d,b=%d", a, b);
	return 0;

}