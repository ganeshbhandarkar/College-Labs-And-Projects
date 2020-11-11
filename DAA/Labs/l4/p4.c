/*
 *  Author: Mr. ganesh bhandarkar gbgb1bgbg@gmail.com 1.0 
 *  Date: 19.08.2020 16:04:02 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int hoo;
int wS(int l,int e,int *a,int w){
	while(l<=e){
		int m = l+(e-l)/2;
		hoo=m;
		if(a[m]==w)return m;
		if(a[m]>w)return wS(l,m-1,a,w);
		if(a[m]<w)return wS(m+1,e,a,w);		
	}
	return -1;
}
int main(){
	srand(time(0));
	
	int n;
	scanf("%d",&n);
	int w;scanf("%d",&w);
	int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);
	int l=0;
	int e=n;
	int ans = wS(l,e,a,w);
	printf("index : %d weight : %d",ans,a[hoo]);
	return 0;
}
***********************************************************************************
***********************************************************************************
#include<stdio.h>
int main()
{
	int n,i,key=-1,weight;
	printf("No of bags : ");
	scanf("%d",&n);
	int arr[n][2], sumarray[n];
	for(i=0;i<n;i++)
	{
		printf("Enter marble weights in the Bag %d :\n",i+1);
		scanf("%d %d",&arr[i][0],&arr[i][1]);
		printf("\n");
	}
	printf("Enter weight to be searched : ");
	scanf("%d",&weight);
	for(i = 0; i < n; i++)
	{
		sumarray[i]=arr[i][0]+arr[i][1];
		if(sumarray[i]==weight)
		{
			key = i;
		}
	}
	if(key<0)
	{
		printf("Not Found");
	}
	else
	{
		printf("Marble weights are %d %d found in bag %d",arr[key][0],arr[key][1],key+1);
	}
	return 0;
}