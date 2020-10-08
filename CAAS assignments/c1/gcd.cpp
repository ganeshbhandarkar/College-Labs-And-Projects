// Created by ganesh bhandarkar
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int gcd(int a, int b) 
{ 
    if(b==0)return a; 
    return gcd(b, a % b);  
} 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int c = 0;
    for(int i=0;i<n;i++){
    	c = gcd(c,a[i]);
    }
    cout<<c;
    return 0;
}