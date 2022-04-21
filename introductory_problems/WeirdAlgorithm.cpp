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
 
 
		while(n != 1)
		{
			cout<<n<<" ";
			if(n%2 == 0)
			{
				n = n/2;
			}
			else {
				n = 3*n + 1;
			}
		}
		cout<<n<<endl;
    return 0;    
}