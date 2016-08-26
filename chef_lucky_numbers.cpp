#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%7==0)
		{
			cout<<n<<endl;
		}
		else if(n%7==1)
		{
			if(n>=8)
			{
				cout<<n-8<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
		else if(n%7==2)
		{
			if(n>=16)
			{
				cout<<n-16<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
		else if(n%7==3)
		{
			if(n>=24)
			{
				cout<<n-24<<endl;
			}
			else 
			{
				cout<<-1<<endl;
			}
		}
		else if(n%7==4)
		{
			cout<<n-4<<endl;
		}
		else if(n%7==5)
		{
			if(n>=12)
			{
				cout<<n-12<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
		else if(n%7==6)
		{
			if(n>=20)
			{
				cout<<n-20<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
		else
		{
			cout<<-1<<endl;
		}
	}
}