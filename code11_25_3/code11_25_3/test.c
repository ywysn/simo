#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�������ַ����е��ַ���������

//�ַ�������
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
//�ַ������������һ�ַ���
void rever_str(char * str)
{
	if (*str)
	{
		char* start = str;
		char *end = str + m_strlen(str) - 1;//�ַ�������
		while (start < end)
		{
			char temp = *start;//��һ���ַ������һ���ַ�����
			*start = *end;
			*end = temp;
			start++;
			end--;
		}
	}
}
//�ַ������������һ�ַ���
void revers_string(char *str)
{
	if (*str)
	{
		char *start = str;
		char *end = str + m_strlen(str) - 1;
		char temp = *start;//��һ���ַ������һ������
		*start = *end;//���һ����Ϊ��\0'
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