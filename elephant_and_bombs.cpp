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
		int length;
		string buildings;
		int remain_buildings=0;
		cin>>length>>buildings;
		vector<int> destroyed;
		destroyed.resize(buildings.length()+2);
		buildings="0"+buildings;
		buildings+="0";
		for(int i=1;i<buildings.length()-1;i++)
		{
			if(buildings[i]=='1')
			{
				destroyed[i-1]=1;
				destroyed[i]=1;
				destroyed[i+1]=1;
			}
		}
		for(int i=1;i<buildings.length()-1;i++)
		{
			if(destroyed[i]==0)
			{
				remain_buildings++;
			}
		}
		cout<<remain_buildings<<endl;
	}
}