#include <iostream>

using namespace std;

#define ll long long int

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ll n,m;
		cin>>n>>m;
		ll ans;
		ans=(m*(n-1))+m-1;
		if(ans%2==0)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}