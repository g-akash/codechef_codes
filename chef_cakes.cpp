#include <iostream>
#include <algorithm>


using namespace std;


int main()
{
	int test_num, cakes_num;
	cin>>test_num;
	for(int counter=0;counter<test_num;counter++)
	{
		cin>>cakes_num;
		cout<<cakes_num/2+1<<endl;
	}
}