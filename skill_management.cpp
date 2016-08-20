#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > value;
vector<int> tim,j;

void doit(int ttm, int prod)
{
	if(prod<0||ttm<0)return;
	if(value[ttm][prod]>=0)return;
	if(prod==0)
	{
		if(tim[prod]<=ttm)
		{
			value[ttm][prod]=j[prod];
			return;
		}
		else
		{
			value[ttm][prod]=0;
			return;
		}
	}
	else
	{
		int va=0,vb=0;
		if(ttm>=tim[prod])
		{
			doit(ttm,prod-1);
			vb=value[ttm][prod-1];
			doit(ttm-tim[prod],prod-1);
			va=j[prod]+value[ttm-tim[prod]][prod-1];
		}
		else
		{
			doit(ttm,prod-1);
			vb=value[ttm][prod-1];
		}
		value[ttm][prod]=max(va,vb);
	}
	return;
}


int main()
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int n,m,timsum=0;
		cin>>n>>m;
		tim.resize(n);
		j.resize(n);
		value.resize(1005);
		for(int i=0;i<1005;i++)
		{
			value[i].resize(n);
			for(int j=0;j<n;j++)
			{
				value[i][j]=-1;
			}
		}
		for(int i=0;i<n;i++)
		{
			cin>>tim[i]>>j[i];
			timsum+=tim[i];
		}
		vector<int> stm;
		stm.resize(m);
		for(int i=0;i<m;i++)
		{
			cin>>stm[i];
		}
		for(int i=0;i<1005;i++)doit(i,n-1);
		for(int i=0;i<m;i++)
		{
			if(stm[i]>=timsum)cout<<value[1004][n-1]<<" ";
			else cout<<value[stm[i]][n-1]<<" ";
		}
		cout<<endl;
		
	}
}