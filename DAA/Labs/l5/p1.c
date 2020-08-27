// Created by ganesh bhandarkar
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int BS(int l,int e,int *a,int k){
	while(l<=e){
		int m = l+(e-l)/2;
		if(a[m]==k)return m;
		if(a[m]>k)return BS(l,m-1,a,k);
		if(a[m]<k)return BS(m+1,e,a,k);		
	}
	return -1;
}
int LS(int *a, int n, int k){
	int ans;
	for(int i=0;i<n;i++){
		if(a[i]==k){
			ans = i;
			break;
		}
	}
	return ans;
}
int main(){
	srand(time(0));
	double rtimeB,rtimeL;
	clock_t startB,endB,startL,endL,timeL,timeB;
	int n;scanf("%d",&n);
	int k;scanf("%d",&k);
	int a[n];
	for(int i=0;i<=n;i++){
		a[i] = rand()%n;
	}
	startB = clock();		
	BS(0,n,a,k);	
	endB = clock();
	startL = clock();		
	LS(a,n,k);	
	endL = clock();
	timeB = abs(startB - endB);
	timeL = abs(startL - endL);
	rtimeB = ((double)timeB)/CLOCKS_PER_SEC;
	rtimeL = ((double)timeL)/CLOCKS_PER_SEC;
	printf("Time taken Binary: %f Sec\n",rtimeB);
	printf("Time taken Linear : %f Sec\n",rtimeL);
	return 0;
}
