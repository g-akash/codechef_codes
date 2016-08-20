#include <bits/stdc++.h>

using namespace std;

map<string,int> m;

int main()
{
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s.length()<2)continue;
		string end=s.substr(s.length()-2);
		if(end=="ka"||end=="ki")
		{
			if(m.find(s)!=m.end())m[s]++;
			else m[s]=1;
		}
	}
	map<string,int>::iterator it=m.begin();
	int ans=0;
	while(it!=m.end())
	{
		string var=it->first;
		//cout<<var<<endl;
		string s1,s2;
		s1=var.substr(0,var.length()-2)+"ka";
		s2=var.substr(0,var.length()-2)+"ki";
		if(m.find(s1)!=m.end()&&m.find(s2)!=m.end()){
		ans+=min(m[s1],m[s2]);
		int ver=min(m[s1],m[s2]);
		m[s1]-=ver;
		m[s2]-=ver;}
		it++;
	}
	cout<<ans<<endl;
}