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
 
 
		string s;
		cin>>s;
		long long int sum = 0,m = 0;
		for(int i = 1; i < s.length(); i++)
		{
			if(s[i] == s[i-1])
			{
				sum++;
				m = max(m,sum);
			}
			else {
				sum  = 0;
			}
		}
 
		cout<<m+1<<endl;
 	return 0;
 
}