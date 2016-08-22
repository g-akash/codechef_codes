#include <iostream>
#include <vector>

using namespace std;


int gcd(int a, int b)
{
	if(a%b==0)return b;
	return gcd(b,a%b);
}

int main()
{
	int test_num, number, count, temp_ans;
	cin>>test_num;
	for(int counter=0;counter<test_num;counter++)
	{
		cin>>count;
		vector<int> numbers;
		numbers.resize(count);
		for(int j=0;j<count;j++)
		{
			cin>>numbers[j];
		}
		temp_ans=numbers[0];
		for(int j=1;j<count;j++)
		{
			temp_ans=gcd(temp_ans,numbers[j]);
		}
		for(int j=0;j<count;j++)
		{
			cout<<numbers[j]/temp_ans<<" ";
		}
		cout<<endl;

	}
}