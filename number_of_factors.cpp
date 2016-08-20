#include <bits/stdc++.h>

using namespace std;

vector<int> primes;

void make_primes()
{
	vector<int> temp;
	temp.resize(1000000);
	for(int i=2;i<1000000;i++)
	{
		if(temp[i]==1)continue;
		for(int j=2*i;j<1000000;j+=i)
		{
			temp[j]=1;
		}
	}
	for(int i=2;i<1000000;i++)
	{
		if(temp[i]==0)primes.push_back(i);
	}
	return ;
}

int main()
{
	int t;
	cin>>t;
	make_primes();
	for(int i=0;i<t;i++)
	{
		int n,temp;
		cin>>n;
		vector<int> vec;
		vec.resize(n);
		unordered_map<int,int> um;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			for(int i=0;i<primes.size();i++)
			{
				while(temp%primes[i]==0)
				{
					//cout<<temp<<endl;
					um[primes[i]]++;
					temp/=primes[i];
				}
				if(temp==1)break;
			}
		}
		int ans=1;
		unordered_map<int,int>::iterator it=um.begin();
		while(it!=um.end())
		{
			ans*=((it->second)+1);
			it++;
		}
		cout<<ans<<endl;
	}

}