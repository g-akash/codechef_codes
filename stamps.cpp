#include <iostream>
#include <vector>

using namespace std;

#define ll long long int

int main()
{
	ll n;
	ll sum=0,var;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>var;
		sum+=var;
	}
	if((n*(n+1))/2!=sum)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}