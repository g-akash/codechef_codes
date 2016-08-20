#include <bits/stdc++.h>

using namespace std;

#define ll long long int


int main()
{
	ll t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		ll n,p,q;
		cin>>n>>p>>q;
		vector<ll> vec;
		vec.resize(n);
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		sort(vec.begin(),vec.end());
		ll count=0;
		for(int i=0;i<n;i++)
		{
			if(p+q*2<vec[i])break;
			if(vec[i]%2==0)
			{
				if(vec[i]<=q*2)
				{
					q-=vec[i]/2;
					count++;
				}
				else
				{
					vec[i]-=q*2;
					q=0;
					p-=vec[i];
					count++;
				}
			}
			else
			{
				if(p==0)continue;
				ll a=vec[i]/2;
				if(a<=q)
				{
					q-=a;
					p-=1;
					count++;
				}
				else
				{
					a-=q;
					q=0;
					p-=(2*a+1);
					count++;
				}

			}

		}
		cout<<count<<endl;
	}
}