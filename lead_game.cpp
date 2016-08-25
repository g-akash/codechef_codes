#include <iostream>

using namespace std;

int main()
{
	int n,lead=0,winner=1,a=0,b=0,curr_a=0,curr_b=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>curr_a>>curr_b;
		a+=curr_a;
		b+=curr_b;
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