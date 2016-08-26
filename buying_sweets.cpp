#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main()
{
	int num_test;
	cin>>num_test;
	while(num_test--)
	{
		int num_notes,sweet_cost,tot_value=0, num_sweets, min_value=100000000;
		cin>>num_notes>>sweet_cost;
		vector<int> notes_value;
		notes_value.resize(num_notes);
		for(int i=0;i<num_notes;i++)
		{
			cin>>notes_value[i];
			tot_value+=notes_value[i];
			min_value=min(min_value,notes_value[i]);
		}
		num_sweets=tot_value/sweet_cost;
		if(num_sweets*sweet_cost>tot_value-min_value)
		{
			cout<<num_sweets<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}

	}
}