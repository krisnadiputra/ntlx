#include<iostream>
#include<cstdio>

using namespace std;

int n,mi,ma,inp;

int main()
{
	ma=-100001;
	mi=100001;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>inp;
		if(inp>ma)ma=inp;
		if(inp<mi)mi=inp;
	}
	cout<<ma<<" "<<mi<<endl;
	return 0;
}