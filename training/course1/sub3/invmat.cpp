#include<iostream>
#include<cstdio>

using namespace std;
int a[3][3];

int main()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cin>>a[i][j];
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[j][i];
			if(j!=2)cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}