#include<stdio.h>
#include<math.h>
int main()
{
	int i, j;
	for (i = 100; i <= 200; i++)//101 i=i+2 
	{
		for (j = 2; j < i; j++)//j <= sqrt(i)
		{
			if (i%j == 0)
			{
				break;
			}

		}

		if (j >= i)//(sqrt(i))
			printf("%d\n", i);





	}
	/*int n = 100;
	int i = 2;
		for (i = 2; i < n / 2; i++)
		{
			while (n<=200)
			{
				if (n %i == 0)
				
					printf("%d\n", n);
				n++;
			
			}
		}
	
	*/

	return 0;

}