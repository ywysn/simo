#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//方式一
char check_sys()
{
	int a = 1; //返回第一个字节
	return *(char*)&a;
}
int main()
{
	if (check_sys() == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}



//方式二
int check_sys()
{
	union Un //联合体
	{
		char c; //c与i的首地址相同
		int i;
	}u;
	u.i = 1;
	return u.c;//返回第一个字节
}
int main()
{
	if (check_sys() == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}