#include<stdio.h>
#include<math.h>
#include<limits.h>
typedef struct{
	int s;
	int e;
}av;
void bs(av a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j].e > a[j+1].e ){
				av t = a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
} 

int main(){
	av a[11]= {{3,5},{0,6},{5,9},{6,10},{1,4},{3,9},{5,7},{12,16},{2,14},{8,12},{8,11}};
	bs(a,11);
	av solv[11];
	int x =1;
	int c = 1;
	for(int i=2;i<=11;i++){
		if(a[i].s >= a[x].e){
			solv[c].s = a[i].s;
			solv[c].e = a[i].e;
			x=i;
			c++;
		}
	}
	for(int i=0;i<11;i++){
		printf("s: %d e: %d \n",a[i].s,a[i].e);
	}
	printf("\n\n%d\n",c);
	printf("s: %d e: %d\n",a[0].s,a[0].e );
	for(int i=1;i<c;i++){
		printf("s: %d e: %d \n",solv[i].s,solv[i].e);
	}
	
	return 0;
}

*********************************************
*********************************************

// C++ program for activity selection problem. 
// The following implementation assumes that the activities 
// are already sorted according to their finish time 
#include<stdio.h> 
  
// Prints a maximum set of activities that can be done by a single 
// person, one at a time. 
//  n   -->  Total number of activities 
//  s[] -->  An array that contains start time of all activities 
//  f[] -->  An array that contains finish time of all activities 
void printMaxActivities(int s[], int f[], int n) 
{ 
    int i, j; 
  
    printf ("Following activities are selected n"); 
  
    // The first activity always gets selected 
    i = 0; 
    printf("%d ", i); 
  
    // Consider rest of the activities 
    for (j = 1; j < n; j++) 
    { 
      // If this activity has start time greater than or 
      // equal to the finish time of previously selected 
      // activity, then select it 
      if (s[j] >= f[i]) 
      { 
          printf ("%d ", j); 
          i = j; 
      } 
    } 
} 
  
// driver program to test above function 
int main() 
{ 
    int s[] =  {1, 3, 0, 5, 8, 5}; 
    int f[] =  {2, 4, 6, 7, 9, 9}; 
    int n = sizeof(s)/sizeof(s[0]); 
    printMaxActivities(s, f, n); 
    return 0; 
}