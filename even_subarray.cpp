#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		vector<ll> vec;
		int n;
		cin>>n;
		vec.resize(n+1);
		ll temp;
		vec[0]=0;
		cin>>vec[1];
		for(int i=2;i<=n;i++)
		{
			cin>>temp;
			vec[i]=vec[i-1]+temp;
		}
		int mno=-1,mxo=-1,mne=-1,mxe=-1;
		for(int i=0;i<=n;i++)
		{
			if(vec[i]%2==0&&mne<0)mne=i;
			if(vec[i]%2==1&&mno<0)mno=i;
			if(vec[i]%2==0)mxe=i;
			if(vec[i]%2==1)mxo=i;
		}
		if(mxo-mno>mxe-mne)cout<<mxo-mno<<endl;
		else cout<<mxe-mne<<endl;

	}
}