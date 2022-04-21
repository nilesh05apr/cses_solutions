#include <bits/stdc++.h>
 
using namespace std;
 
 
bool cmp(pair<char, int>&a, pair<char, int>&b)
{
	return a.second > b.second;
}
 
 
 
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
		
		map<char,int> f;
 
		for(int i = 0; i < s.length(); i++)
		{
			f[s[i]]++;
		}
 
 
		int flag = 0;
 
 
		for(auto& x:f)
		{
			if(x.second%2!=0)
			{
				flag++;
			}
		}
 
 
		if(flag >= 2)
		{
			cout<<"NO SOLUTION\n";
		}
		else
		{
			vector <pair<char,int>> v;
			for(auto x : f)
			{
				v.push_back(x);
			}
			sort(v.begin(), v.end(),cmp);
			std::vector<char> ans;
			stack <char> st;
			if(flag == 1)
			{
				char mid;
				for(auto x : v)
				{
					if(x.second%2 != 0)
					{
						mid = x.first;
					}
					for(int i = 0; i < x.second/2; i++)
					{
						ans.push_back(x.first);
						st.push(x.first);
 
					}
				}
				ans.push_back(mid);
			}
			else
			{
				for(auto x : v)
				{
					for(int i = 0; i < x.second/2; i++)
					{
						ans.push_back(x.first);
						st.push(x.first);
					}
				}
 
			}
			for(auto x : ans)
			{
				cout<<x;
			}
			while(!st.empty())
			{
				cout<<st.top();
				st.pop();
			}
		}
 
	return 0;
 
}