#include<stdio.h>
#include<math.h>
#include<limits.h>
typedef struct{
	int p,w;
	float rat;
}ks;
void bs(ks a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j].rat < a[j+1].rat){
				ks t = a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
} 
int main(){
	ks it[7]= {{10,2},{5,3},{15,5},{7,7},{6,1},{18,4},{3,1}};
	for(int i=0;i<7;i++){
		it[i].rat = (float)((it[i].p)/it[i].w);
	}
	bs(it,7);
	// ks algo
	float solv[7]={0.0},optprofit = 0.0;
	int remwt = 15,i;
	for(int i=0;i<7;i++){
		if(it[i].w <= remwt){
			solv[i]=1.0;
			remwt=remwt-it[i].w;
		}
		else
			break;

	}
	printf("\n\n");
	if(i<7){
		solv[i]=(float)remwt/it[i].w;
	}
	printf("sol vec");
	for(int i=0;i<7;i++)printf("%f ",solv[i]);
	printf("\n\n");
	for (int i = 0; i < 7; ++i)
	{
		optprofit+=solv[i]*it[i].p;
	}
	printf("\n optimal max profit : %f",optprofit);
	return 0;
}

*************************************************
*************************************************


// C/C++ program to solve fractional Knapsack Problem 
#include <bits/stdc++.h> 
  
using namespace std; 
  
// Structure for an item which stores weight and 
// corresponding value of Item 
struct Item  
{ 
    int value, weight; 
  
    // Constructor 
    Item(int value, int weight) 
        : value(value) 
        , weight(weight) 
    { 
    } 
}; 
  
// Comparison function to sort Item according to val/weight 
// ratio 
bool cmp(struct Item a, struct Item b) 
{ 
    double r1 = (double)a.value / (double)a.weight; 
    double r2 = (double)b.value / (double)b.weight; 
    return r1 > r2; 
} 
  
// Main greedy function to solve problem 
double fractionalKnapsack(int W, struct Item arr[], int n) 
{ 
    //    sorting Item on basis of ratio 
    sort(arr, arr + n, cmp); 
  
    //    Uncomment to see new order of Items with their 
    //    ratio 
    /* 
    for (int i = 0; i < n; i++) 
    { 
        cout << arr[i].value << "  " << arr[i].weight << " : 
    " 
             << ((double)arr[i].value / arr[i].weight) << 
    endl; 
    } 
    */
  
    int curWeight = 0; // Current weight in knapsack 
    double finalvalue = 0.0; // Result (value in Knapsack) 
  
    // Looping through all Items 
    for (int i = 0; i < n; i++)  
    { 
        // If adding Item won't overflow, add it completely 
        if (curWeight + arr[i].weight <= W)  
        { 
            curWeight += arr[i].weight; 
            finalvalue += arr[i].value; 
        } 
  
        // If we can't add current Item, add fractional part 
        // of it 
        else 
        { 
            int remain = W - curWeight; 
            finalvalue 
                += arr[i].value 
                   * ((double)remain / (double)arr[i].weight); 
            break; 
        } 
    } 
  
    // Returning final value 
    return finalvalue; 
} 
  
// Driver code 
int main() 
{ 
    int W = 50; //    Weight of knapsack 
    Item arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } }; 
  
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // Function call 
    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n); 
    return 0; 
}