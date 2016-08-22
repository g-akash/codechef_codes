#include <iostream>

using namespace std;

int main()
{
	int n,lead=0,winner=0,a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a>b&&a-b>lead)
		{
			lead=a-b;
			winner=1;
		}
		else if(b>a&&b-a>lead)
		{
			lead=b-a;
			winner=2;
		}
	}
	cout<<winner<<" "<<lead<<endl;
}