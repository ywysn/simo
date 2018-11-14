#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr = 'a';
		printf("请输入一个字母\n");
		{

		scanf("%c", &arr);
			if (arr >= 'A'&&arr <= 'Z')
			{
				arr = arr + 32;;
			}
			else if (arr >= 'a'&&arr <= 'z')
			{
				arr = arr - 32;
			}
			else
				printf("输入有误，请重新输入");
		}
		printf("%c\n", arr);
	return 0;
}