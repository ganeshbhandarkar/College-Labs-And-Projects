// Created by ganesh bhandarkar
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;cin>>k;
    int sum = 0;
    int n = k;
    while(n>0){
    	sum += n%10;
    	n/=10;
    }
    if(k%sum == 0)cout<<"Harshad Number";
    else cout<<"no hn";

    return 0;
}