
#include<stdio.h>

int main() 
{ 

	int num = 3; 
	int space; 

	int i, j, lterm, rterm; 
	lterm = 1;
	rterm = num * num + 1; 
	for (i = num; i > 0; i--) 
	{ 
		for (space = num; space > i; space--) 
			printf(" ");

		for (j = 1; j <= i; j++) 
		{ 
			printf("%d",lterm);
			printf("*");
			lterm++; 
		} 
		for (j = 1; j <= i; j++) 
		{ 
			printf("%d",rterm);
			if (j < i) 
				printf("*"); 
			rterm++; 
		} 
		rterm = rterm - (i - 1) * 2 - 1; 
		printf("\n");
	} 
} 
