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
		vector <long long int> v(n);
		long long int sum = 0, maxsum = 0;
		for(int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		maxsum = v[0];
 
		for(int i = 0; i < n; i++)
		{
			sum += v[i];
			maxsum = max(maxsum,sum);
			if(sum < 0) sum = 0;
		}
 
		cout<<maxsum<<endl;
	return 0;
 
}