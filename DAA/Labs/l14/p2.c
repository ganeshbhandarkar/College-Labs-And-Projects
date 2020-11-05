#include<stdio.h>

int Q[4],pi[4]={-1,-1,-1,-1},front=-1,rear=-1,d[4]={-1,-1,-1,-1},vis[4]={0};
int v[4][4]={0};

void enqueue(int x)
{
 rear++;
 Q[rear]=x;
 if(front==-1)
  front=0; 
}

int dequeue()
{
 int y=Q[front];
 front++;
 return y;
}

int Qfront(){
	return Q[front];
}

int main(){
 int u;

 v[0][1]=1;
 v[0][2]=1;
 v[1][0]=1;
 v[1][3]=1;
 v[2][0]=1;
 v[3][1]=1;

 for(int i=0;i<4;i++)
 {
   for(int j=0;j<4;j++)
   {
    printf("%d ",v[i][j]);
   }
   printf("\n");
 }
 printf("\n");

 //fill pi(v),d(v) and visited(v) correctly
 //use them to produce required outputs
 d[0] = 0;
 enqueue(0);
 vis[0] = 1;
 	printf("bfs order : ");
 	while(front<=rear){
        //int p = Qfront();
        int p = dequeue();
        printf("%d ",p);
        for(int i = 0;i < 4 ; i++)
        {	
        	if(v[p][i] == 1){
        		if(vis[ i ] == 0)
	            {
	                d[ i] = d[ p ]+1;                 
	                 enqueue(i);
	                 vis[ i ] = 1;
	  			}
        	}
            
        }
    }
    printf("\ndistance array: ");

    for(int i=0;i<4;i++){
    	printf("%d ",d[i]);
    }
    printf("\n");

 return 0;
}
 
 
