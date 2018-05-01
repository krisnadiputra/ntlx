#include<iostream>
#include<cstdio>

using namespace std;

int m,n,mat[100][100];

int main()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>mat[i][j];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<mat[m-j-1][i];
			if(j!=m-1)cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}