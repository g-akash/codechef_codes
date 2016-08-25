#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	unordered_map<int,int> list1,list2,list3;
	vector<int> voters1,voters2,voters3;
	voters1.resize(n1);
	voters2.resize(n2);
	voters3.resize(n3);
	for(int i=0;i<n1;i++)
	{
		cin>>voters1[i];
		list1[voters1[i]]=1;
	}
	for(int i=0;i<n2;i++)
	{
		cin>>voters2[i];
		list2[voters2[i]]=1;
	}
	for(int i=0;i<n3;i++)
	{
		cin>>voters3[i];
		list3[voters3[i]]=1;
	}
	vector<int> final_voters;
	for(int i=0;i<voters1.size();i++)
	{
		if(list2.find(voters1[i])!=list2.end()||list3.find(voters1[i])!=list3.end())
		{
			final_voters.push_back(voters1[i]);
		}
	}
	for(int i=0;i<voters2.size();i++)
	{
		if(list1.find(voters2[i])==list1.end()&&list3.find(voters2[i])!=list3.end())
		{
			final_voters.push_back(voters2[i]);
		}
	}
	//cout<<"kk"<<endl;
	sort(final_voters.begin(),final_voters.end());
	cout<<final_voters.size()<<endl;
	for(int i=0;i<final_voters.size();i++)
	{
		cout<<final_voters[i]<<endl;
	}
}