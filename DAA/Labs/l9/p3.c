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

*************************************************************
*************************************************************

/****
Write a C Program that reads two sequence of characters or two strings as
input and find the longest common subsequence among two strings as output
using Dynamic Programming.The followings things must come as output.
****/

#include <stdio.h>
#include <limits.h>
#include <string.h>

int max(int a,int b)
{
	return (a>b);
}

int helper(char *s1,char *s2,int m,int n,int dp[m+1][n+1])
{
	int ans=0;
	if(m==0 || n==0)
		return 0;

	if(dp[m][n]>-1)
		return dp[m][n];

	if(s1[0]==s2[0])
		return 1+helper(s1+1,s2+1,m-1,n-1,dp);

	else
	{
		int option1=helper(s1,s2+1,m,n-1,dp);
		int option2=helper(s1+1,s2,m-1,n,dp);
		ans=max(option1,option2);
	}

	dp[m][n]=ans;
	return ans;

}

int lcs(char *arr,char *brr)
{
	int ans=0;
	int m=strlen(arr);
	int n=strlen(brr);

	int dp[m+1][n+1];
	for(int i=0;i<m+1;i++)
	{
		for(int j=0;j<n+1;j++)
			dp[i][j]=-1;
	}

	ans=helper(arr,brr,m,n,dp);

	return ans;
}

int main()
{
	char arr[]="ABA";
	char brr[]="AAA";

	printf("%d\t",lcs(arr,brr));
	return 0;
}