// Created by ganesh bhandarkar
#include <bits/stdc++.h>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int main()
{
	/// not useful for larger non-fibo n no 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll dp[1000] = {0};
    ll dpp[1000] = {0};
    dp[0]=0,dp[1]=1;
    dpp[0] = 1;
    dpp[1] = 1;
    for(ll i=2;i<2*n;i++){
    	dp[i]=dp[i-1]+dp[i-2];
    	if(!dpp[dp[i]])dpp[dp[i]]=1;
    }
    ll counter = 0;
    for(ll i=0;i<n*n;i++){
    	if(dpp[i]==0){
    		cout<<i<<" ";
    		counter++;
    	}
    	if(counter==n)break;
    }
    return 0;
}