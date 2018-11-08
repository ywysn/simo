#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[]="welcome to bit!!!!!";
//	char arr2[]= "##################";
//	int left = 0;
//	int right = strlen(arr1 - 1);
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//	
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!!!!!";
//	char arr2[] = "#########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "*******************";
//	char arr2[] = "                   ";
//	char arr3[] = "                   ";
//	int left = 0;
//	int right = strlen (arr1) - 1;
//	int mid = (right - left) / 2;
//	printf("%s\n", arr2);
//    right = mid;
//	left = mid ;
//	while (left >= 0)
//	{
//		arr2[left] = arr1[left];
//		arr2[mid] = arr1[mid];
//		left--;
//		mid++;
//		printf("%s\n", arr2);
//	}
//	while (left <= right)
//		{
//			arr2[left] = arr3[left];
//		    arr2[mid] =arr3[mid];
//			left++;
//			mid--;
//		    printf("%s\n", arr2);
//		}
//	return 0;
//}

#include<stdio.h.>
#include<stdlib.h>
int main()
{
	int a=0;
	int i,j;
	int m=1,n=0;
	printf("请输入一个数：\n");
	scanf("%d", &a);
	for (i = 0; i < 5; i++)
	{
			m = m*a;
		    n = n + m;
	}
	printf("%d\n", n);
	return 0;
}



