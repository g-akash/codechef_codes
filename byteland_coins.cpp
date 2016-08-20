#include <bits/stdc++.h>

using namespace std;

#define ll long long int

unordered_map<ll,ll> m;

ll max_value(ll n)
{
	if(n<=7||n==11)return n;
	if(m.find(n)!=m.end())return m[n];
	ll ans = max_value(n/2)+max_value(n/3)+max_value(n/4);
	if(m.size()<10000000)m[n]=ans;
	return ans;
}

int main()
{
	ll n;
	while(cin>>n)
	{
		cout<<max_value(n)<<endl;
	}
}