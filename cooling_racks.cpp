#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int n;
		vector<int> racks,pies;
		cin>>n;
		racks.resize(n);
		pies.resize(n);
		for(int i=0;i<n;i++)
		{
			cin>>pies[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>racks[i];
		}
		sort(pies.begin(),pies.end());
		sort(racks.begin(),racks.end());
		int curr_pie=0,pies_stored=0;
		for(int i=0;i<racks.size();i++)
		{
			if(pies[curr_pie]<=racks[i])
			{
				pies_stored++;
				curr_pie++;
			}
		}
		cout<<pies_stored<<endl;
	}
}