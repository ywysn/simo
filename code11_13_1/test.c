#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ʽһ
char check_sys()
{
	int a = 1; //���ص�һ���ֽ�
	return *(char*)&a;
}
int main()
{
	if (check_sys() == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}



//��ʽ��
int check_sys()
{
	union Un //������
	{
		char c; //c��i���׵�ַ��ͬ
		int i;
	}u;
	u.i = 1;
	return u.c;//���ص�һ���ֽ�
}
int main()
{
	if (check_sys() == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}