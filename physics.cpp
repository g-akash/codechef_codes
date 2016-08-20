#include <iostream>
#include <vector>
#include <unordered_map>
#include <stdio.h>

using namespace std;


int main()
{
	int t,temp;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int n;
		cin>>n;
		double f;
		scanf("%lf",&f);
		//cin>>f;
		unordered_map<double,int> um;
		vector<double> vec;
		vec.resize(n);
		vector<vector<double> > vars;
		vars.resize(n);
		for(int i=0;i<n;i++)
		{
			scanf("%lf",&vec[i]);
			um[vec[i]]++;
			vars[i].resize(31);
			vars[i][0]=vec[i];
			for(int j=1;j<31;j++)
			{
				vars[i][j]=vars[i][j-1]/f;
				if(vars[i][j]<1.0)break;
			}

		}
		int ans=0,extra=0;
		for(int i=0;i<n;i++)
		{
			if(um.find(vars[i][0])!=um.end())
			{
				temp = um[vars[i][0]];	//ans+=(um[vars[i][j]]-1);
				extra+=(temp-1);
			}
			for(int j=1;j<31&&vars[i][j]>=1.0;j++)
			{
					if(um.find(vars[i][j])!=um.end())
						ans+=um[vars[i][j]];

			}
		}
		ans+=(extra/2);
		printf("%d\n",ans);

	}
}