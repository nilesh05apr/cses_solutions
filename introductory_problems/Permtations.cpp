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
		if(n == 1) cout<<1<<endl;
		
		long long int etemp = n,otemp = n;
		if(n > 3 && n != 4)
		{
			if(n % 2 == 0)
			{
				etemp = n;
				otemp = n-1;
			}
			else 
			{
				otemp = n;
				etemp = n - 1;
			}
			while(etemp != 0)
			{
				cout<<etemp<<" ";
				etemp -= 2;
			}
			while(otemp > 0)
			{
				cout<<otemp<<" ";
				otemp -= 2;
			}
		}
		else if(n == 4)
		{
			cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
		}
		else {
			cout<<"NO SOLUTION"<<endl;
		}
 
 
	return 0;
 
}