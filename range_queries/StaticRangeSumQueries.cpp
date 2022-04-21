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
 
	long long int n,q;
	cin>>n>>q;
	long long int v[n],p[n];
	for(int i = 1; i <= n; i++)
	{
		p[i] = 0;
	}
	for(int i = 1; i <= n; i++)
	{
		cin>>v[i];
	}
	p[1] = v[1];
	for(int i = 2; i <= n; i++)
	{
		p[i] = p[i-1] + v[i];
	}
	for(int i = 0; i < q; i++)
	{
		long long int l,r;
		cin>>l>>r;
 
		if(l == r)
		{
			cout<<v[l]<<"\n";
		}
		else
		{
			if(l == 1)
			{
				cout<<p[r]<<"\n";
			}
			else
				cout<<p[r]-p[l-1]<<"\n";
		}
	}
	return 0;
}