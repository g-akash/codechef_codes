#include <iostream>
#include <string>
#include <vector>


using namespace std;

vector<string> lucky;


bool is_lucky(string temp)
{
	for(int i=0;i<lucky.size();i++)
	{
		int pos = temp.find(lucky[i]);
		if(pos>=0&&pos<=temp.length()-lucky[i].length())
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int k,n;
	string temp;
	cin>>k>>n;
	lucky.resize(k);
	for(int i=0;i<k;i++)
	{
		cin>>lucky[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp.length()>=47)
		{
			cout<<"Good"<<endl;
		}
		else if(is_lucky(temp))
		{
			cout<<"Good"<<endl;
		}
		else
		{
			cout<<"Bad"<<endl;
		}
	}
}