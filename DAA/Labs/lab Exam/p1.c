#include<stdio.h>
int main(){
	int a[] = { -13,5,-11,4,66,27,-10,8,23,-100 };
	int n = sizeof(a)/sizeof(int);
	int x = 0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			if(i!=x){
				int t=a[i];a[i]=a[x];a[x]=t;
			}
			x++;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}