#include <bits/stdc++.h>

using namespace std;

#define ll long long int

class item
{
public:
	ll wt;
	ll cst;
};

bool comp(item p, item q)
{
	if(p.cst<q.cst)return true;
	return false;
}

int main()
{
	ll n;
	cin>>n;
	vector<item> item1,item2;
	item it;
	ll total_weight=0;
	for(ll i=0;i<n;i++)
	{
		cin>>it.wt>>it.cst;
		if(it.wt==2)item2.push_back(it);
		else item1.push_back(it);
		total_weight+=it.wt;
	}
	sort(item1.begin(),item1.end(),comp);
	sort(item2.begin(),item2.end(),comp);
	vector<ll> ans;
	ans.resize(total_weight+1);
	ans[0]=0;
	vector<ll> x,y;
	x.resize(total_weight+1);
	y.resize(total_weight+1);
	if(item1.size()>0)
	{
		ans[1]=item1[item1.size()-1].cst;
		y[1]=(ll)(item1.size())-2;
	}
	else
	{
		ans[1]=0;
		y[1]=(ll)(item1.size())-1;
	}
	
	
	x[1]=(ll)(item2.size())-1;
	
	x[0]=(ll)(item2.size())-1;
	y[0]=(ll)(item1.size())-1;
	for(ll i=2;i<=total_weight;i++)
	{
		if(x[i-2]>=0&&y[i-1]>=0)
		{
			if(ans[i-2]+item2[x[i-2]].cst>=ans[i-1]+item1[y[i-1]].cst)
			{
				ans[i]=ans[i-2]+item2[x[i-2]].cst;
				x[i]=x[i-2]-1;
				y[i]=y[i-2];
			}
			else
			{
				ans[i]=ans[i-1]+item1[y[i-1]].cst;
				x[i]=x[i-1];
				y[i]=y[i-1]-1;
			}
		}
		else if(x[i-2]>=0)
		{
			ans[i]=ans[i-2]+item2[x[i-2]].cst;
			x[i]=x[i-2]-1;
			y[i]=y[i-2];
		}
		else if(y[i-1]>=0)
		{
			ans[i]=ans[i-1]+item1[y[i-1]].cst;
			x[i]=x[i-1];
			y[i]=y[i-1]-1;
		}
	}
	for(ll i=1;i<total_weight+1;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}