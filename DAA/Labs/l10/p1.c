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

..................................................................
....................................................................


#include <limits.h> 
#include <stdio.h> 
  
// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n 
int MatrixChainOrder(int p[], int n) 
{ 
  
    /* For simplicity of the program, one extra row and one 
       extra column are allocated in m[][].  0th row and 0th 
       column of m[][] are not used */
    int m[n][n]; 
  
    int i, j, k, L, q; 
  
    /* m[i, j] = Minimum number of scalar multiplications needed 
       to compute the matrix A[i]A[i+1]...A[j] = A[i..j] where 
       dimension of A[i] is p[i-1] x p[i] */
  
    // cost is zero when multiplying one matrix. 
    for (i = 1; i < n; i++) 
        m[i][i] = 0; 
  
    // L is chain length. 
    for (L = 2; L < n; L++) { 
        for (i = 1; i < n - L + 1; i++) { 
            j = i + L - 1; 
            m[i][j] = INT_MAX; 
            for (k = i; k <= j - 1; k++) { 
                // q = cost/scalar multiplications 
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]; 
                if (q < m[i][j]) 
                    m[i][j] = q; 
            } 
        } 
    } 
  
    return m[1][n - 1]; 
} 
  
int main() 
{ 
    int arr[] = { 1, 2, 3, 4 }; 
    int size = sizeof(arr) / sizeof(arr[0]); 
  
    printf("Minimum number of multiplications is %d ", 
           MatrixChainOrder(arr, size)); 
  
    getchar(); 
    return 0; 
}