#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		double p,s;
		cin>>p>>s;
		double tempp=p/4.0,temps=s/2.0;
		double var=(sqrt(4.0*tempp*tempp-12.0*temps));
		double b=(2.0*tempp-(var))/(6.0);
		double l=(tempp-2.0*b);
		cout<<fixed<<setprecision(2)<<l*b*b<<endl;
	}
}