
#include <stdio.h> 
void main() 
{ 
	int n = 5; 
	int i, j, k = 0; 
	for (i=1; i<=n; i++) 
	{ 
		if (i%2!=0) 
		{ 
			
			for (j=k+1; j<k+i; j++)
			{
				printf("%d * ",j);
			}
			printf("%d\n",j);
			j++;
			k = j; 	 
		} 
		else
		{
			k = k+i-1; 
			for (j=k; j>k-i+1; j--) 
			{
				printf("%d * ",j);
			}
			printf("%d\n",j);
		} 
	} 
} 
