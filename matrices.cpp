#include <bits/stdc++.h>

using namespace std;

#define ll long long int


int main()
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		ll n,ans=0;
		cin>>n;
		for(ll i=1;i<n;i++)
		{
			ll var=i*(n-i);
			for(ll j=1;j<=(ll)(sqrt(var));j++)
			{
				if(var%j==0)
					{ans+=2*(var/j-1);if(j<=var/j-1)ans--;}
				else 
					{ans+=2*(var/j);if(j<=var/j)ans--;}

			}
		}
		cout<<ans<<endl;
	}
}