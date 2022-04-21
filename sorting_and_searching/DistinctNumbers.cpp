#include <bits/stdc++.h>
 
using namespace std;
 
//We can use HashSet or Set in C++ for this problem.
//but I Enjoy using Maps :)
 
 
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
 
 
		int n;
		cin>>n;
		map <long long int, long long int> m;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin>>x;
			m[x]++;
		}
		cout<<m.size()<<"\n"; 
	return 0;
 
}