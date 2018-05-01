#include<iostream>
#include<cstdio>

using namespace std;
int inp;

int main()
{
	cin>>inp;
	cout<<inp<<endl;
	for(int i=inp/2;i>0;i--)
	{
		if(inp%i==0)
			cout<<i<<endl;
	}
	return 0;
}