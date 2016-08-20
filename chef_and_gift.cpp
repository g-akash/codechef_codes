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
		cin>>n;
		vector<int> mx,mn,act;
		mx.resize(n);
		mn.resize(n);
		act.resize(n);
		for(int i=0;i<n;i++)
		{
			cin>>act[i];
		}
		mx[0]=act[0];
		mn[0]=act[0];
		for(int i=1;i<n;i++)
		{
			vector<int> temp;
			temp.push_back(mx[i-1]*act[i]);
			temp.push_back(mx[i-1]+act[i]);
			temp.push_back(mx[i-1]-act[i]);
			temp.push_back(mn[i-1]*act[i]);
			temp.push_back(mn[i-1]+act[i]);
			temp.push_back(mn[i-1]-act[i]);
			sort(temp.begin(),temp.end());
			mx[i]=temp[5];
			mn[i]=temp[0];
		}
		cout<<mn[n-1]<<endl;

	}
}