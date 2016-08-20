#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;
char s1[100005],s2[100005];

int main()
{
	int t;
	scanf("%d",&t);
	for(int test=0;test<t;test++)
	{
		int n,d;
		scanf("%d",&n);
		scanf("%d",&d);
		
		scanf("%s",s1);
		scanf("%s",s2);
		//cin>>s1>>s2;
		vector<vector<int> > v1,v2;
		v1.resize(min(n,d));
		v2.resize(min(n,d));
		for(int i=0;i<min(n,d);i++)
		{
			v1[i].resize(26);
			v2[i].resize(26);
		}
		for(int i=0;i<n;i++)
		{
			v1[i%d][int(s1[i])-97]++;
		}
		for(int i=0;i<n;i++)
		{
			v2[i%d][int(s2[i])-97]++;
		}
		if(v1==v2)printf("Yes\n");
		else printf("No\n");
	}
}