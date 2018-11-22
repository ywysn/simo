#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest,const char* str)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(str != NULL);
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = "*************";
	printf("%s\n", my_strcpy(arr, "hello"));
	return 0;
}