#include <bits/stdc++.h>
 
#define endl "\n"
 
using namespace std;
  
 
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
 
 
		long long int n;
		cin>>n;
		long long int v[n];
		for(int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
 
 
		unsigned long long int ans = 0;
 
		for(int i = 1; i < n; i++)
		{
			if(v[i] < v[i-1])
			{
				ans += v[i-1] - v[i];
				v[i] = v[i-1];
			}
		}
 
		cout<<ans<<endl;

    return 0;
}    
 
 
 
 
 
 
 
 