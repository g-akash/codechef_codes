#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m, temp;
		vector<int> tot_jobs,chef_jobs,assistnt_jobs;
		cin>>n>>m;
		tot_jobs.resize(n+1);
		for(int j=0;j<m;j++)
		{
			cin>>temp;
			tot_jobs[temp]=1;
		}
		temp=1;
		for(int j=1;j<=n;j++)
		{
			if(tot_jobs[j]==1)continue;
			if(temp%2==1)chef_jobs.push_back(j);
			else assistnt_jobs.push_back(j);
			temp++;
		}
		for(int j=0;j<chef_jobs.size();j++)
		{
			cout<<chef_jobs[j]<<" ";
		}
		cout<<endl;
		for(int j=0;j<assistnt_jobs.size();j++)
		{
			cout<<assistnt_jobs[j]<<" ";
		}
		cout<<endl;

	}
}