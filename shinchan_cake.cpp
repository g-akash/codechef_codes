#include <iostream>
#include <vector>

using namespace std;
int n,l,b;

void cut_the_cake()
{
	if(n==0)return;
	n-=1;
	if(l<=b)
	{
		b-=l;
	}
	else
	{
		l-=b;
	}
	cut_the_cake();
	return;
}


int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>l>>b;
		cut_the_cake();
		if(l*b>0)
		{
			cout<<"Yes "<<l*b<<endl;
		}
		else cout<<"No"<<endl;
	}
}