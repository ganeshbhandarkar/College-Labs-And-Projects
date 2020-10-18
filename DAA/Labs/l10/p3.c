#include<stdio.h>
#include<string.h>
int max(int a, int b){
	if(a>b){
		return a;
	}
	return b;
}
void LCS(char *X, char *Y,int m, int n, int c[][7],char s[][7]){
	for(int i=0;i<=m;i++){
		c[i][0] = 0;
	}
	for(int j=0;j<=n;j++){
		c[0][j] = 0;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(X[i]==Y[j]){
				c[i][j]=c[i-1][j-1]+1;
				s[i][j]='M'; 
			}else if(c[i-1][j] >= c[i][j-1]){
				c[i][j] = c[i-1][j];
				s[i][j] = 'M';
			}else{
				c[i][j] = c[i][j-1];
				s[i][j] = 'L';
			}
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("%c ", s[i][j]);
		}
		printf("\n");
	}
} 
void PrintLCS(char s[][7],char *X,int i,int j){
	if(i==0 || j==0){
		return ;
	}
	if(s[i][j]=='M'){
		PrintLCS(s,X,i-1,j-1);
		printf("%c ",X[i]);
	}else if(s[i][j]=='U'){
		PrintLCS(s,X,i-1,j);
	}else{
		PrintLCS(s,X,i,j-1);
	}
}
int main(){
	char X[] = "AGGTAB";  
	int m = strlen(X);
	char Y[] = "GXTXAYB";
	int n = strlen(Y);
	int c[m][n];
	char s[m][n];
	LCS(X,Y,m,n,c,s);
	PrintLCS(s,X,6,7);
	return 0;
}