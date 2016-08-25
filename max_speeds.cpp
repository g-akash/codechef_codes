#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long int


int main()
{
	ll t;
	cin>>t;
	for(ll test=0;test<t;test++)
	{
		ll n,curr_speed=1000000000000,temp,count=0;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>temp;
			if(temp<=curr_speed)
			{
				count++;
			}
			curr_speed=min(curr_speed,temp);
		}
		cout<<count<<endl;
	}
}