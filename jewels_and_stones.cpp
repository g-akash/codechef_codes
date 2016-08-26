#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


int main()
{
	int test_num;
	cin>>test_num;
	while(test_num--)
	{
		string jewels,comb;
		int count_of_jewels=0;
		cin>>jewels>>comb;
		unordered_map<char,int> um;
		for(int i=0;i<jewels.length();i++)
		{
			um[jewels[i]]=1;
		}
		for(int i=0;i<comb.length();i++)
		{
			if(um.find(comb[i])!=um.end())
			{
				count_of_jewels++;
			}
		}
		cout<<count_of_jewels<<endl;

	}
}