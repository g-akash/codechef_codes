#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	int num_test;
	cin>>num_test;
	while(num_test--)
	{
		string recipe;
		int ans=1;
		cin>>recipe;
		int mid_point,len=recipe.length();
		if(recipe.length()%2==0)
		{
			mid_point=recipe.length()/2;
		}
		else
		{
			mid_point=recipe.length()/2+1;
		}
		for(int i=0;i<mid_point;i++)
		{
			if(recipe[i]==recipe[len-1-i]&&recipe[i]!='?')
			{
				continue;
			}
			else if(recipe[i]==recipe[len-1-i]&&recipe[i]=='?')
			{
				ans*=26;
				ans%=10000009;
			}
			else if(recipe[i]=='?'||recipe[len-1-i]=='?')
			{
				continue;
			}
			else
			{
				ans=0;
			}
		}
		cout<<ans<<endl;
	}
}