#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		vector<int> permutation,inverse,reverse;
		permutation.resize(n+1);
		inverse.resize(n+1);
		for(int i=1;i<=n;i++)
		{
			cin>>permutation[i];
			inverse[permutation[i]]=i;
		}
		if(inverse==permutation)
		{
			cout<<"ambiguous"<<endl;
		}
		else
		{
			cout<<"not ambiguous"<<endl;
		}
		cin>>n;
	}
}