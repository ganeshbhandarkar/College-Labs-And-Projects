#include<stdio.h>
#include<stdlib.h>

int V = 4;
int sum = 0;
int count = 0;
void init(int arr[][V]) {
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++){
            arr[i][j] = 0;
        }
    }
}

void addEdge(int arr[][V], int i, int j,int w) {
  arr[i][j] = w;
}

void printM(int arr[][V]) {
  int i, j;
  for (i = 0; i < V; i++) {
    printf("%d: ", i);
    for (j = 0; j < V; j++) {
      sum += arr[i][j];
      if(arr[i][j] > 0){
        count++;
      }
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int adjM[V][V];
  init(adjM);
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int u,v,w;
      scanf("%d %d %d",&u,&v,&w);
      addEdge(adjM,u,v,w);
  }
  printM(adjM);
  sum = sum/count;
  printf("\n Mean - > %d\n",sum);
  for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
      if(adjM[i][j] >= sum){
        printf("\n%d -> %d",i,j);
      }
    }
  }
  printf("\n\n");
  int x,y;
  scanf("%d %d",&x,&y);
  for(int i=x;i<=y;i++){
    printf("%d->",i);
    for(int j=0;j<=y;j++){
      if(adjM[i][j] != 0 && adjM[j][i] > 0 ){
         printf("%d->",j);
      }
    }
  }
  

  return 0;
}