#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int n,c,sum=0,temp;
		cin>>n>>c;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			sum+=temp;
		}
		if(sum<=c)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}