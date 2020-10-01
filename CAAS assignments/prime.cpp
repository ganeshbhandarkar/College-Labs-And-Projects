// Created by ganesh bhandarkar
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int prime[1000];
int seive(int n){
	memset(prime,1, sizeof(prime));
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i*i<=n;i++){
		if(prime[i]){
			for(int j=i*i;j<=n;j+=i){
				prime[j] = 0;
			}
		}	
	}
	return prime[n];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   	int n;cin>>n;
   	if(seive(n))cout<<"prime";
   	else cout<<"not prime";
   	//seive(n)==1?cout<<"not prime \n":cout<<"prime \n";
    return 0;
}