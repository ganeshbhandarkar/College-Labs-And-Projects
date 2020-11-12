#include<stdio.h>

typedef struct{
int src;
int dsc;
int wt;
}edge;

edge arr[15];
int parent[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int tot = 0;
int find(int vt)
{
 while(parent[vt]!=-1)
   vt=parent[vt];
 return vt;
}

int main()
{
 //arr[1].src=7;  arr[1].dsc=8;  arr[1].wt=1;//edge (7,8) with weight 1 given as input

 //after reading like above sort the edges as per weight in increasing order
 //try to fill parent array correctly
 //use parent array to print edges and cost of msct
 int n;
 scanf("%d",&n);
 int u,v,w;
 for(int i=0;i<n;i++){
 	scanf("%d%d%d",&u,&v,&w);
 	arr[i].src=u;
 	arr[i].des=v;
 	arr[i].wt=w;
 }

 for (i = 0; i < n; i++) p[i] = i;

 for(int i=0;i<n;i++){
 	for(int j=0;i<n;j++){
 		if(arr[j].wt > arr[j+1].wt){
 			int t = arr[j].wt;
 			arr[j].wt = arr[j+1].wt;
 			arr[j+1].wt = t;
 		}
 	}
 }
 
 return 0;
}   
