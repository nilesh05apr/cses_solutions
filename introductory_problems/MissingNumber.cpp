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
		long long int x = 0;
		for(int i = 0; i < n-1; i++)
		{
			long long int temp;
			cin>>temp;
			x += temp;
		}
		long long int sum = (n * (n+1) )/ 2;
		cout<<sum - x<<endl;
	return 0;
 
}