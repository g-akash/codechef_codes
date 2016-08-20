#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;
#define ll long long int

int lstk(ll n, ll k)
{
	vector<ll> vec,p2;
	vec.resize(32);
	p2.resize(32);
	vec[0]=n;
	p2[0]=1;
	ll rem = (ll)pow(10,k);
	for(int i=1;i<32;i++)
	{
		vec[i]=(vec[i-1]*vec[i-1])%rem;
		p2[i]=p2[i-1]*2;
	}
	ll ans=1;
	for(int i=31;i>=0;i--)
	{
		if(p2[i]<=n)
		{
			ans*=vec[i];
			ans%=rem;
			n-=p2[i];
		}
	}
	return ans;
	return 1;
}

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		double n;
		ll k;
		cin>>n>>k;
		double a,b,c,d;
		ll e,f;
		a=log10(n);
		b=a*n;
		e=(ll)(floor(b));
		f=e-k;
		b-=double(f);
		d=pow(10,b);
		a=pow(10,k);
		while(d>=a)
		{
			d/=10.0;
		}
		cout << setw(k) << setfill('0')<<(ll)d<<" "<<setw(k) << setfill('0')<<lstk((ll)n,k)<<endl;
	}
}