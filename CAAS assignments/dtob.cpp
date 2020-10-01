// Created by ganesh bhandarkar
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define _DEBUG
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifdef _DEBUG
	int tt = clock();
	#endif
	
	int n;cin>>n;
    string ans = "";
    while(n>0){
    	if(n&1)ans += '1';
    	else ans += '0';
    	n>>=1;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    
	#ifdef _DEBUG
		cerr << "\nTIME = " << clock() - tt << endl;
		tt = clock();
	#endif

    return 0;
}