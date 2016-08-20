#include<bits/stdc++.h>

using namespace std;

unordered_map<int,int> mp,mpmax;


void connected(int n)
{
	
	if(n==0)
	{
		mp[0]=0;
		mpmax[0]=0;
	}
	if(n==1)
		{mp[n]=2;mpmax[n]=2;return;}
	if(mp.find(n)!=mp.end())return;
	//cout<<n<<" "<<m<<endl;
	int min_req=100000;
	mp[n]=100000;
	mpmax[n]=0;
	for(int i=1;i<=n;i++)
	{
		connected(i-1);
		connected(n-i);
		mp[n]=min(mp[n],mp[(i-1)]+mp[(n-i)]+n+1);
		mpmax[n]=max(mpmax[n],mpmax[(i-1)]+mpmax[(n-i)]+n+1);

	}
	//mp[n*10000+m]=min_req;
	return ;
}


int main()
{
	int t;
	connected(30);
	//for(int i=1;i<=30;i++)cout<<mp[i]<<" "<<mpmax[i]<<endl;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		connected(n);
		//cout<<connected(n,m)<<endl;
		if(m>=mpmax[n])cout<<m-mpmax[n]<<endl;
		else if(m<mp[n])cout<<-1<<endl;
		else cout<<0<<endl;
	}
}