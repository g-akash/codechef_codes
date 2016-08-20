#include <iostream>
#include <vector>

using namespace std;

#define ll long long int

int main()
{
	ll n,k,a;
	cin>>a>>n>>k;
	n++;
	vector<ll> vec;
	vec.resize(k);
	for(int i=0;i<k;i++)
	{
		vec[i]=a%n;
		a/=n;
	}
	for(int i=0;i<k;i++)cout<<vec[i]<<" ";
		cout<<endl;
}