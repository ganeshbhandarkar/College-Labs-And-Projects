/*
 *  Author: Mr. Ganesh Bhandarkar ganesh@mx 1.0 
 *  Date: 03.08.2020 16:06:56 IST
 * 	4. Write a C Program to enter a number and store the number across the following structure and print the content of each member of the structure. Then aggregate each member of the structure to form the original number and print the same.
	struct	pkt{
	char ch1;
	char ch2[2];
	char ch3;
	};
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
struct pkt{
	char ch1[1];
	char ch2[2];
	char ch3[1];
}num;
int main(){
	srand(time(0));
	
	scanf("%s",num.ch1);
	scanf("%s",num.ch2);
	scanf("%s",num.ch3);
	printf("%s%s%s",num.ch1,num.ch2,num.ch3);
	
	return 0;
}
