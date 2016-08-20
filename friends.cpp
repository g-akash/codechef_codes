#include<bits/stdc++.h>

using namespace std;

#define ll long long int
vector<vector<ll> > suggestions;

vector<ll> frnd_list;

int main()
{
	ll n,temp,ans=0;
	string s;
	cin>>n;
	suggestions.resize(n);
	vector<string> friends;
	friends.resize(n);
	frnd_list.resize(n);
	for(int i=0;i<n;i++)
	{
		cin>>friends[i];
		suggestions[i].resize(n);
		frnd_list[i]=0;
		for(int j=0;j<n;j++)
		{
			//cin>>bits[j];
			//cout<<bits[j]<<endl;
			frnd_list[i]*=2;
			if(friends[i][j]=='1')frnd_list[i]+=1;
			suggestions[i][j]=0;	
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j&&friends[i][j]=='0'&&(frnd_list[i]&frnd_list[j])!=0){ans++;}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ans+=suggestions[i][j];
		}
	}
	cout<<ans<<endl;

}