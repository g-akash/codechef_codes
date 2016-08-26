#include <iostream>
#include <vector>

using namespace std;


int fact(int x)
{
	int ans=1;
	for(int i=2;i<=x;i++)
	{
		ans*=i;
	}
	return ans;
}


int combinations(int n, int r)
{
	return fact(n)/(fact(r)*(fact(n-r)));
}


int main()
{
	int num_test;
	cin>>num_test;
	while(num_test--)
	{
		int num_select, temp, curr_select=0,curr_score=100;
		vector<int> scores;
		scores.resize(101);
		for(int i=0;i<11;i++)
		{
			cin>>temp;
			scores[temp]++;
		}
		cin>>num_select;
		while(curr_select+scores[curr_score]<num_select)
		{
			curr_select+=scores[curr_score];
			curr_score--;
		}
		cout<<combinations(scores[curr_score],num_select-curr_select)<<endl;

	}
}