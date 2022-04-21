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
 
		int t;
		cin>>t;
		while(t--)
		{
			long long int x,y;
			cin>>x>>y;
			double a = max(x,y);
			double b = min(x,y);
			double ans_x = ((2*a) - b)/3;
			double ans_y = ((2*b) - a)/3;
			if(ans_x >= 0 && ans_y >= 0 && int(ceil(ans_x)) == int(floor(ans_x)) && int(ceil(ans_y)) == int(floor(ans_y)))
			{
				cout<<"YES\n";
			}
			else
			{
				cout<<"NO\n";
			}
		}
 
 
	return 0;
 
}