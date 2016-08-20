#include <iostream>
#include <vector>

using namespace std;

#define ll long long int


int main()
{
	ll t;
	cin>>t;
	for(ll test=0;test<t;test++)
	{
		ll n,m,f,var;
		cin>>n>>m>>f;
		ll mb=0,fb=0,tt=0;
		for(ll j=0;j<n;j++)
		{
			cin>>var;
			if(var==0)continue;
			if(var%m==0)
			{
				mb++;
				tt++;
			}
			else if(var%f==0)
			{
				fb++;
				tt++;
			}

		}
		if((tt)*100>=n*70)
		{
			cout<<"Yes"<<endl;
			if(mb>fb)cout<<"Multan"<<endl;
			else if(fb>mb)cout<<"Fultan"<<endl;
			else cout<<"Both"<<endl;
		}
		else cout<<"No"<<endl;

	}
}