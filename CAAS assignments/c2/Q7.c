#include <stdio.h>

int main()
{
	int num=1, k=4;
	for (int i = 1; i <= k; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d * ", num);
			num++;
		}
		printf("\n");
		
	}
	
	num--;
	for (int i = k; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d * ", num);
			num--;
		}
		printf("\n");
		
	}
	
	return 0;
}
	
