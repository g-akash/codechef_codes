#include <iostream>
#include <math.h>


using namespace std;



int main()
{
	int num_test;
	cin>>num_test;
	while(num_test--)
	{
		int n;
		cin>>n;
		int root = sqrt(n);
		int ans=0;
		for(int i=root;i>=1;i--)
		{
			if(n%i==0)
			{
				ans=n/i-i;
				break;
			}
		}
		cout<<ans<<endl;
	}
}