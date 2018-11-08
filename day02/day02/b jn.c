#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//交换两个给定值
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int c;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//
//}
//不许创建临时变量，交换两个数的内容
//int main()
//{
//	int a = 5;
//	int b = 8;
//    a = a + b;
//	b = a - b;
//	a = a - b;
//    printf("a=%d,b=%d", a, b);
//	return 0;
//
//}

//求10个整数中最大值
//int main()
//{
//	int i;
//	int max = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i>=max)
//			max = i;
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//
//将三个数按从大到小输出
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b <c)
//	{
//		d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}
//
//
//求两个数的最大公约数
//int main()
//{
//	int m, n, temp, r;
//	int a, b;
//	scanf("%d,%d\n", &a, &b);
//	m = a;
//	n = b;
//
//	if (m < n)
//	{
//		temp = m;
//		m = n;
//		n = temp;
//	}
//	r = m%n;
//	while (r != 0)
//	{
//		m = n;
//		n = r;
//		r = m%n;
//	}
//	printf("%d和%d的公约数是：%d\n", a, b, n);
//	return 0;
//}




//组A中的内容和数组B中的内容进行交换（数组一样大）
//int main()
//{   
//	int i, j;
//	int a[5] = { 2, 5, 7, 9, 4 };
//	int b[5] = { 5, 8, 3, 9, 3 };
//	for (i = 0; i < 5; i++)
//	{
//		j = a[i];
//		a[i] = b[i];
//		b[i] = j;
//		printf("a[%d]=%d\n",i, a[i]);
//		printf("b[%d]=%d\n",i, b[i]);
//	}
//	return 0;
//}








//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值
//#include<Windows.h>
//int main()
//{
//	float i = 0,j=-1;
//	float sum = 0;
//	float n = 0;
//	{
//		for (i = 1; i <= 100; i++)
//		{
//			j = -j;
//			n = j / i;
//			sum = sum + n;
//		}
//	}
//	printf("%f\n", sum);
//	return 0;
//}


//编写程序数一下1到100的所有整数中出现多少次数字9
#include <stdlib.h>
int main()
{
	int i;
	int m = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i < 10 && i == 9)
			m++;
		if (i % 10 == 0)
			m++;
		if (i / 10 == 0)
			m++;
	}
	printf("%d\n", m);
	return 0;
}

//{
	/*int i = 0;*/
	/*int count = 0;
	for (i = 0; i <= 100; ++i)
	{
		if (i < 10 && i == 9)
			++count;
		else
		{
			if (i / 10 == 9)
				++count;
			if (i% 10 == 9)
				++count;
		}
	 }
	printf("%d\n", count);
}*/

