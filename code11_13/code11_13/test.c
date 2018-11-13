#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int left = 0;
	int k = 7;
	int right = sizeof(arr)/sizeof(arr[0]);
	int mid = left + (right - left) / 2;
	while (left <= right)
	{
		if (k < arr[mid])
			right = mid--;
		else if (k>arr[mid])
			left = mid++;
		else
		{
			printf("%d\n", mid);
			printf("找到了\n");
			break;
		}
	}
	if (left > right)
		printf("找不到\n");
	return 0;
}