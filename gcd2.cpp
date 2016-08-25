#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

#define ll long long int


ll gcd(ll a, ll b)
{
	if(a%b==0)return b;
	return gcd(b,a%b);
}


int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll a;
		string s,piece;
		cin>>a>>s;
		ll rem=0,temp;
		//calculate the first remainder here
		if(a!=0)
		{
			while(s!="")
			{
				if(s.length()>=6)
				{
					piece=s.substr(0,6);
					s=s.substr(6);
				}
				else
				{
					piece=s;
					s="";
				}
				temp = (ll)(pow(10,piece.length()));
				rem*=temp;
				rem+=stoi(piece);
				rem%=a;
			}
			if(rem==0)cout<<a<<endl;
			else cout<<gcd(a,rem)<<endl;
		}
		else
		{
			cout<<s<<endl;
		}


		//cout<<rem<<endl;
		
	}
}