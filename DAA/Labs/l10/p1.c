#include <stdio.h>
#include <limits.h>

int m[7][7],s[7][7];

void print_opt_parens(int i,int j){
	if(i==j)printf("A %d",i);
	else{
		printf("(");
		print_opt_parens(i,s[i][j]);
		print_opt_parens(s[i][j]+1,j);
		printf(")");
	}
}

void matrix_chain_order(int *dim){
	int n=6;
	for(int i=0;i<=n;i++)m[i][i]=0;
	for(int l=2;l<=n;l++){
		for(int i=1;i<=n-1;i++){
			int j = i+l-1;
			m[i][j] = INT_MAX;
			for(int k=i;k<j;k++){
				int q = m[i][k]+m[k+1][j]+dim[i-1]*dim[k]*dim[j];
				if(q<m[i][j]){
					m[i][j]=q;
					s[i][j]=k;
				}
			}
		}
	}
	for(int j=1;j<=6;j++){
		for(int i=1;i<=6;i++){
			if(i<=j)printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	for(int j=1;j<=6;j++){
		for(int i=1;i<=6;i++){
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int dim[8]={0,30,35,15,5,10,20,25};
	matrix_chain_order(dim);
	print_opt_parens(1,6);
	return 0;
}