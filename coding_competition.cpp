#include <bits/stdc++.h>

using namespace std;

#define ll long long int

vector<ll> fact;


int main()
{
	fact.resize(100005);
	fact[0]=1;
	for(ll i=1;i<100005;i++)
	{
		fact[i]=(fact[i-1]*i)%1000000007;
	}
	
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		vector<ll> teams;
		teams.resize(26);
		string s;
		cin>>s;
		for(ll j=0;j<s.length();j++)
		{
			teams[int(s[j])-97]++;
		}	
		ll count=0;
		ll ans=1;
		for(ll j=0;j<26;j++)
		{
			if(teams[j]>0)count++;
			ans*=fact[teams[j]];
			ans%=1000000007;
		}
		ans*=fact[count];
		ans%=1000000007;
		cout<<ans<<endl;
	}
}