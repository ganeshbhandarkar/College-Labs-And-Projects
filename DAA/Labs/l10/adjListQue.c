#include<stdio.h>
#include<stdlib.h>
struct node
{
 int name;
 struct node *next;
};

int main()
{
  struct node *adj_list[15];
  char ch;
  int n=5;
  for(int i=1;i<n;i++)
  {
   printf("Enter the adjacent vertex of vertex %d:\n",i);
   struct node *new=(struct node *)malloc(sizeof(struct node));
   scanf("%d",&new->name);
   new->next=NULL;
   adj_list[i]=new;
   printf("Do you want to continue(y/n):");
   scanf("\n%c",&ch);
   while(ch=='y')
   {
    struct node *new1=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&new1->name);
    new->next=new1;
    new=new1;
    printf("Do you want to continue(y/n):");
    scanf("\n%c",&ch);
   }
  }
  struct node *p;
  int in_deg, out_deg, i, j;
  int total_indegree = 0,total_outdegree = 0;
  for (i = 1; i < n ; i++ )
  {
    in_deg = out_deg = 0;
    p = adj_list[i];
    while( p != NULL )
    {
      out_deg++;
      total_outdegree += out_deg; 
      p = p -> next;
    }
    for ( j = 1 ; j < n ; j++ )
    {
      p = adj_list[j];
      while( p != NULL ) 
      {
        if ( p -> name == i ){
          in_deg++;
          total_indegree += in_deg;
        }                
        p = p -> next;
      }
    }
  }
  printf("\n\nindegree %d , outdegree %d",total_indegree,total_outdegree);
  
  //dir_graph(adjarr,n);
  
  return 0;
}



  
  
