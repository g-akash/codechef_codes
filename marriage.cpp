#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>


using namespace std;



int main()
{
	int t;
	scanf("%d",&t);
	for(int k=0;k<t;k++)
	{
		char s1[100][25050],s2[100][25050];
		scanf("%s",s1[k]);
		scanf("%s",s2[k]);
		int i=0,j=0;
		bool ans=true;
		while(s1[k][i]!='\0')
		{
			if(s2[k][j]=='\0'){ans=false;break;}
			if(s2[k][j]==s1[k][i]){i++;j++;}
			else j++;
		}
		if(ans==false)
		{
			i=0;j=0;
			while(s2[k][i]!='\0')
			{
				if(s1[k][j]=='\0'){ans=false;break;}
				if(s1[k][j]==s2[k][i]){i++;j++;}
				else j++;
			}
		}
		if(ans)printf("YES\n");
		else printf("NO\n");

	}
}