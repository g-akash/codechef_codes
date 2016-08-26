#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;


int gcd(int a, int b)
{
	if(a%b==0)return b;
	return gcd(b,a%b);
}

int main()
{
	int num_test;
	cin>>num_test;
	while(num_test--)
	{
		int n,ans;
		vector<int> vec;
		cin>>n;
		vec.resize(n);
		cin>>vec[0];
		ans=vec[0];
		for(int i=1;i<n;i++)
		{
			cin>>vec[i];
			ans=gcd(ans,vec[i]);
		}
		cout<<ans<<endl;

	}
}