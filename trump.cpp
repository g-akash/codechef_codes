#include <bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int n,k;
		cin>>n>>k;
		vector<int> votes;
		votes.resize(n+1);
		int temp;
		for(int i=1;i<=n;i++)
		{
			cin>>temp;
			votes[temp]++;
			if(temp==i)
			{
				votes[temp]=-1000000000;
			}
		}
		int count=0;
		for(int i=1;i<=n;i++)
		{
			if(votes[i]>=k)count++;
		}
		cout<<count<<endl;
	}
}