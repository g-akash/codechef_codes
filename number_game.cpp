#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		map<int,vector<string> > scores_to_players;
		int n,score;
		string player_name;
		vector<string> temp;
		temp.resize(1);
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>player_name>>score;
			if(scores_to_players.find(score)!=scores_to_players.end())
			{
				scores_to_players[score].push_back(player_name);
			}
			else
			{
				temp[0]=player_name;
				scores_to_players[score]=temp;
			}

		}
		map<int,vector<string> >::iterator it = scores_to_players.begin();
		while(it!=scores_to_players.end())
		{
			if(it->second.size()==1)break;
			it++;
		}
		if(it!=scores_to_players.end())
		{
			cout<<it->second[0]<<endl;
		}
		else
		{
			cout<<"Nobody wins."<<endl;
		}
	}
}