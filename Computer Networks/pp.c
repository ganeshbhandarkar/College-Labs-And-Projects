#include<stdio.h>
int main(){
	char x[6][4] = {
		"235","541","784","259","569","135",
	};
	int j = 0;
	for(int i=0;i<6;i+=2){
		char t = x[i][j];
		x[i][j] = x[i+1][j];
		x[i+1][j] = t;
		j++;
	}
	for(int i=0;i<6;i++){
		printf("%s ",x[i]);
	}
	return 0;
}