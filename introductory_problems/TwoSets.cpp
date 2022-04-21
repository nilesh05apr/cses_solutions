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
		long long int sum = n * (n+1) / 2;
		if(sum & 1)
		{
			cout<<"NO\n";
		}
		else 
		{
			cout<<"YES\n";
			long long int ans = sum/2;
			vector <long long int> a, b;
			for(int i = n; i >= 1; i--)
			{
				if(i <= ans)
				{
					a.push_back(i);
					ans -= i;
				}
				else
				{
					b.push_back(i);
				}
			}
			cout<<a.size()<<endl;
			for(auto x : a){
				cout<<x<<" ";
			}
			cout<<endl<<b.size()<<endl;
			for(auto x : b)
			{
				cout<<x<<" ";
			}
 
		} 
 
	return 0;
 
}