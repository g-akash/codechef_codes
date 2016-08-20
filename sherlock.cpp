#include <bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		vector<int> vec;
		vec.resize(10);
		int temp,sum=0,c1=0,c2=0;
		for(int j=0;j<n;j++)
		{
			cin>>temp;
			vec[temp]++;
			sum+=temp;
			if(temp%3==1)c1++;
			else if(temp%3==2)c2++;
		}
		bool ans=false;
		if(vec[0]>0)
		{
			if(sum%3==0)ans=true;
			else if(sum%3==1)
			{
				if(c1>0)
				{
					ans=true;
					for(int j=1;j<10;j+=3)
						if(vec[j]>0)
						{
							vec[j]--;break;
						}
				}
				else if(c2>1)
				{
					int count2=2;
					ans=true;
					for(int j=2;j<10;j+=3)
					{
						while(vec[j]>0&&count2>0)
						{
							vec[j]--;
							count2--;
						}
					}
				}
			}
			else if(sum%3==2)
			{
				if(c2>0)
				{
					ans=true;
					for(int j=2;j<10;j+=3)
						if(vec[j]>0)
						{
							vec[j]--;break;
						}
				}
				else if(c1>1)
				{
					int count1=2;
					ans=true;
					for(int j=1;j<10;j+=3)
					{
						while(vec[j]>0&&count1>0)
						{
							vec[j]--;
							count1--;
						}
					}
				}
			}
		}
		else cout<<-1<<endl;
		if(ans)
		{
			ans=false;
			for(int j=1;j<10;j++)
			{
				if(vec[j]>0)
				{
					for(int l=9;l>=0;l--)
					{
						for(int k=0;k<vec[l];k++)cout<<l;
					}
					cout<<endl;
					ans=true;
					break;
				}
			}
			if(!ans)cout<<-1<<endl;
			
		
		}
	}
}