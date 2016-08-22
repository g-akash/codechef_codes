#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s,var,left,op,right;
		cin>>s;
		stack<string> st;
		for(int j=0;j<s.length();j++)
		{
			var=s.substr(j,1);
			if(var=="(")continue;
			else if(var!=")")st.push(var);
			else
			{
				right=st.top();st.pop();
				op=st.top();st.pop();
				left=st.top();st.pop();
				left=left+right+op;
				st.push(left);
			}
		}
		cout<<st.top()<<endl;
	}
}