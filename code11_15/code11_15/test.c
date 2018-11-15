#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int nul = 1;//nµÄ½×³Ë
	int sum = 0;//½×³ËÖ®ºÍ
	for (i = 1; i <= 20; i++)
	{
		nul = nul*i;
		sum = sum + nul;
	}
	printf("%d ", sum);
	return 0;
}