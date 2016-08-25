#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

#define ll long long int
vector<ll> ans;


vector<ll> get_min_max(vector<ll> &temp)
{
	
	
	ans[0]=1000000000;
	ans[1]=-1000000000;
	for(int i=0;i<temp.size();i++)
	{
		ans[0]=min(ans[0],temp[i]);
		ans[1]=max(ans[1],temp[i]);
	}
	return ans;
}

int main()
{
	int t;
	cin>>t;
	ans.resize(2);
	for(int test=0;test<t;test++)
	{
		int n,argmin;
		vector<ll> numbers,plus_min,plus_max,minus_min,minus_max,mult_min,mult_max,temp,min_max;
		cin>>n;
		numbers.resize(n);
		plus_min.resize(n);
		plus_max.resize(n);
		minus_min.resize(n);
		minus_max.resize(n);
		mult_min.resize(n);
		mult_max.resize(n);
		temp.resize(6);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&numbers[i]);
		}
		plus_min[0]=numbers[0];
		plus_max[0]=numbers[0];
		minus_min[0]=numbers[0];
		minus_max[0]=numbers[0];
		mult_min[0]=numbers[0];
		mult_max[0]=numbers[0];
		for(int i=1;i<n;i++)
		{
			temp[0]=plus_min[i-1]+numbers[i];
			temp[1]=plus_max[i-1]+numbers[i];
			temp[2]=minus_min[i-1]+numbers[i];
			temp[3]=minus_max[i-1]+numbers[i];
			temp[4]=mult_min[i-1]+numbers[i];
			temp[5]=mult_max[i-1]+numbers[i];
			min_max=get_min_max(temp);

			plus_min[i]=min_max[0];
			plus_max[i]=min_max[1];

			temp[0]=plus_min[i-1]-numbers[i];
			temp[1]=plus_max[i-1]-numbers[i];
			temp[2]=minus_min[i-1]-numbers[i];
			temp[3]=minus_max[i-1]-numbers[i];
			temp[4]=mult_min[i-1]-numbers[i];
			temp[5]=mult_max[i-1]-numbers[i];
			min_max=get_min_max(temp);
			
			minus_min[i]=min_max[0];
			minus_max[i]=min_max[1];


			temp[0]=plus_min[i-1]*numbers[i];
			temp[1]=plus_max[i-1]*numbers[i];
			temp[2]=minus_min[i-1]*numbers[i];
			temp[3]=minus_max[i-1]*numbers[i];
			temp[4]=mult_min[i-1]*numbers[i];
			temp[5]=mult_max[i-1]*numbers[i];
			min_max=get_min_max(temp);

			mult_min[i]=min_max[0];
			mult_max[i]=min_max[1];


		}
		temp[0]=plus_min[n-1];
		temp[1]=plus_max[n-1];
		temp[2]=minus_min[n-1];
		temp[3]=minus_max[n-1];
		temp[4]=mult_min[n-1];
		temp[5]=mult_max[n-1];
		printf("%lld\n",get_min_max(temp)[0]);	
	}
}