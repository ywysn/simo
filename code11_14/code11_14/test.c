#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr = 'a';
		printf("������һ����ĸ\n");
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
				printf("������������������");
		}
		printf("%c\n", arr);
	return 0;
}