#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//将参数字符串中的字符反向排列

//字符串长度
int m_strlen(char*str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
//字符串反向输出第一种方法
void rever_str(char * str)
{
	if (*str)
	{
		char* start = str;
		char *end = str + m_strlen(str) - 1;//字符串长度
		while (start < end)
		{
			char temp = *start;//第一个字符与最后一个字符交换
			*start = *end;
			*end = temp;
			start++;
			end--;
		}
	}
}
//字符串反向输出第一种方法
void revers_string(char *str)
{
	if (*str)
	{
		char *start = str;
		char *end = str + m_strlen(str) - 1;
		char temp = *start;//第一个字符与最后一个交换
		*start = *end;//最后一个变为‘\0'
		*end = '\0';
		revers_string(start + 1);
		*end = temp;
	}
}
int main()
{
	char str[100] = { 0 };
	scanf("%s", str);
	rever_str(str);
	printf("%s\n", str);
	revers_string(str);
    printf("%s\n", str);
	return 0;
}