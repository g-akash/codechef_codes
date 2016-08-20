#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		vector<int> vec;
		vec.resize(n);
		for(int i=0;i<n;i++)
		{
			cin>>vec[i];
		}
		cin>>k;
		k=vec[k-1];
		sort(vec.begin(),vec.end());
		for(int i=0;i<n;i++)
		{
			if(vec[i]==k)
			{
				cout<<i+1<<endl;
				break;
			}
		}


	}
}