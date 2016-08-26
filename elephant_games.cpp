#include <iostream>
#include <vector>


using namespace std;



int main()
{
	int test_num;
	cin>>test_num;
	while(test_num--)
	{
		int num_rounds;
		cin>>num_rounds;
		while(num_rounds--)
		{
			int i,n,q;
			cin>>i>>n>>q;
			if(n%2==0)
			{
				cout<<n/2<<endl;
			}
			else
			{
				if(i==1)
				{
					if(q==1)
					{
						cout<<n/2<<endl;
					}
					else
					{
						cout<<n/2+1<<endl;
					}
				}
				else
				{
					if(q==1)
					{
						cout<<n/2+1<<endl;
					}
					else
					{
						cout<<n/2<<endl;
					}
				}

			}
		}
	}
}