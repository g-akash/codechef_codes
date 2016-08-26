#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num_test;
	cin>>num_test;
	while(num_test--)
	{
		int n;
		vector<int> vec;
		cin>>n;
		vec.resize(n+1);
		for(int i=1;i<=n;i++)
		{
			cin>>vec[i];
		}
		bool is_good=true;
		for(int i=1;i<=n;i++)
		{
			if(abs(vec[i]-i)>1)
			{
				is_good=false;
			}
		}
		if(is_good)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}