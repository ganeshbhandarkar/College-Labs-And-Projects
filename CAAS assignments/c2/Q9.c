
#include<stdio.h>
void main() 
{ 
	int n = 3;
	int s = 2 * n - 1; 
	for (int i = 0; i < (s / 2) + 1; i++) 
	{ 
		
		int m = n; 
		for (int j = 0; j < i; j++) 
		{ 
			printf("%d ",m);
			m--; 
		}
		for (int k = 0; k < s - 2 * i; k++) 
		{ 
			printf("%d ",n-i);
		}
		m = n - i + 1; 
		for (int l = 0; l < i; l++)
		 { 
			printf("%d ",m);
			m++; 
		} 
		printf("\n");
	} 
	for (int i = s / 2 - 1; i >= 0; i--) 
	{
		int m = n; 
		for (int j = 0; j < i; j++) 
		{ 
			printf("%d ",m);
			m--; 
		} 
		for (int k = 0; k < s - 2 * i; k++) 
		{ 
			printf("%d ",n-i);
		} 
		m = n - i + 1; 
		for (int l = 0; l < i; l++) { 
			printf("%d ",m);			
			m++; 
		} 
		printf("\n");
	} 
} 
