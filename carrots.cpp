#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int n,q,l,r;
		cin>>n>>q;
		vector<int> srtd;
		vector<int> vec;
		vec.resize(n);
		
		srtd.resize(n);
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
			srtd[i]=vec[i];
		}
		int itr=min(12,n);
		for(int i=2;i<=itr;i++)
		{
			int sum=0;
			for(int j=0;j<i-1;j++)
			{
				sum+=vec[j];
			}
			int var=0;
			for(int j=i-1;j<n;j++)
			{
				sum+=vec[j];
				srtd.push_back(sum);
				sum-=vec[var];
				var++;
			}
		}
		sort(srtd.begin(),srtd.end());
		//cout<<srtd.size()<<" size"<<endl;
		for(int i=1;i<=min(10,int(srtd.size())-1);i++)
		{
			srtd[i]+=srtd[i-1];
		}
		for(int i=0;i<q;i++)
		{
			cin>>l>>r;
			l--;
			r--;
			if(r>min(9,int(srtd.size())-1))r=min(9,int(srtd.size())-1);
			if(l==0)cout<<srtd[r]<<" ";
			else cout<<srtd[r]-srtd[l-1]<<" ";
		}
		cout<<endl;

	}
}