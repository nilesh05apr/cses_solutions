#include <bits/stdc++.h>
 
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
 
		long long int count = 0;
		for(int i = 5; n/i >= 1; i *= 5)
		{
			count += n/i;
		}
		cout<<count<<endl;
 
 
	return 0;
 
}