#include <stdio.h>

using namespace std;

int main()
{
	int n,t,k,c=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&t);
		if(t%k==0)c++;
	}
	printf("%d\n",c);
}