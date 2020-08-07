/*
 *  Author: Ganesh Bhandarkar ganesh@mx 1.0 
 *  Date: 05.08.2020 17:39:47 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
typedef long long ll;
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,b%a);
}
int main(){
	srand(time(0));
	
	int a,b;scanf("%d%d",&a,&b);
	int ans = gcd(a,b);
	printf("%d",ans);	
	return 0;
}
