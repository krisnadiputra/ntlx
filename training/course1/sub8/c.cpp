#include<iostream>
#include<cstdio>

using namespace std;
int n,inp,ctr;

int main()
{
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>inp;
		ctr=0;
		for(int j=2;j*j<=inp;j++)
		{
			if(inp%j==0)ctr+=2;
			if(inp/j==j)ctr--;
			if(ctr==3)break;
		}
		if(ctr<3)cout<<"YA"<<endl;
		else cout<<"BUKAN"<<endl;
	}
	return 0;
}