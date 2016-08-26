#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	int num_test;
	cin>>num_test;
	while(num_test--)
	{
		string jewels;
		int ans=0;
		vector<int> jewel_count;
		jewel_count.resize(300);
		cin>>jewels;
		for(int i=0;i<jewels.length();i++)
		{
			jewel_count[jewels[i]]++;
		}
		for(int i=0;i<300;i++)
		{
			if(jewel_count[i]%2==0)
			{
				ans+=jewel_count[i]/2;
			}
			else
			{
				ans+=jewel_count[i]/2+1;
			}
		}
		cout<<ans<<endl;

	}
}