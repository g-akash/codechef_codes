#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <stdio.h>

using namespace std;


#define ll long long int


int main()
{
	ll t,var;
	scanf("%lld",&t);
	for(ll i=0;i<t;i++)
	{
		ll n;
		ll ans=0;
		scanf("%lld",&n);
		vector<ll> vec;
		vector<ll> box_type;
		vec.resize(n);
		box_type.resize(n);
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&vec[i]);
			vec[i]++;
			box_type[i]=0;
		}
		stack<ll> st;
		vector<ll> visited;
		visited.resize(n);
		ll curr;
		for(ll j=0;j<n;j++)
		{
			if(box_type[j]!=0)continue;
			//cout<<j<<endl;
			curr=j;
			while(!visited[curr])
			{
				st.push(curr);
				visited[curr]=1;
				curr=(curr+vec[curr])%n;
			}
			if(box_type[curr]!=0)
			{
				while(!st.empty())
				{
					box_type[st.top()]=2;
					st.pop();
				}
			}
			else
			{
				bool mg=true;
				while(!st.empty())
				{
					var=st.top();
					st.pop();
					if(var!=curr&&mg)
					{
						box_type[var]=1;
						ans++;
					}
					else if(var!=curr&&!mg)
					{
						box_type[var]=2;
					}
					else
					{
						box_type[var]=1;
						ans++;
						mg=false;
					}
				}
			}
		}
		printf("%lld\n",ans);


	}
}