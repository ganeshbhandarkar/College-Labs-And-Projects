/*
 *  Author: Mr. Ganesh Bhandarkar ganesh@mx 1.0 
 *  Date: 03.08.2020 16:07:02 IST
 * 	5. Write a C program to check whether the Host machine is in Little Endian or Big Endian. Enter a number, print the content 
 * 	of each byte location and Convert the Endianness of the same i.e. Little to Big Endian and vice-versa.
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	
	unsigned int x = 0x76543210;
	char *c = (char*) &x;

	printf ("*c is: 0x%x\n", *c);
	if (*c == 0x10)
	{
	printf ("Underlying architecture is little endian. \n");
	}
	else
	{
	 printf ("Underlying architecture is big endian. \n");
	}
	
	
	return 0;
}
