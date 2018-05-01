#include<iostream>
#include<cstdio>

using namespace std;

int a[100][100],b[100][100],c[100][100];
int n,m,p;

int main()
{
	cin>>n>>m>>p;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
			cin>>b[i][j];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<p;j++)
		{
			c[i][j]=0;
			for(int k=0;k<m;k++)
			{
				c[i][j]+=(a[i][k]*b[k][j]);
			}
			cout<<c[i][j];
			if(j!=p-1)cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}