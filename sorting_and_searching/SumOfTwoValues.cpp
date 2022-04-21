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
 
 
		long long int n,x;
		cin>>n>>x;
		map <long long int, long long int> m;
		set <long long int> s;
		vector <long long int> v(n);
		for(int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		bool flag = false;
		for(int i = 0; i < n; i++)
		{
			if(s.find(x-v[i]) != s.end())
			{
				cout<<m[x- v[i]] + 1<<" "<<i+1<<endl;
				flag = true;
			}
			else
			{
				s.insert(v[i]);
				m[v[i]] = i;
			}
		}
 
		if(!flag)
		{
			cout<<"IMPOSSIBLE\n";
		} 
	return 0;
 
}