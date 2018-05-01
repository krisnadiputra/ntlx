#include<iostream>
#include<cstdio>

using namespace std;

int inp;

int main()
{
	cin>>inp;
	while(inp%2==0)
		inp/=2;
	if (inp>1) cout<<"bukan"<<endl;
	 else cout<<"ya"<<endl;
	return 0;
}