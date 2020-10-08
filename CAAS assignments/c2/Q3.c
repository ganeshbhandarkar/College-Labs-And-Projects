#include <stdio.h>

int main()
{
	int num=3, k=4;
	for (int i = 1; i <= k; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d", num);
		}
		printf("\n");
		num++;
	}
	
	num--;
	for (int i = k; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d", num);
		}
		printf("\n");
		num--;
	}
	
	return 0;
}
	
