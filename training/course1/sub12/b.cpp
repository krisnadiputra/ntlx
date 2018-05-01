#include<iostream>
#include<cstdio>

using namespace std;

int board[101][101];
int n,m,k,rx,ry;

int calc(int b, int k)
{
	int s[4];
	if(b>1)s[0]=board[b-1][k];
	else s[0]=1;
	if(k<m)s[1]=board[b][k+1];
	else s[1]=1;
	if(b<n)s[2]=board[b+1][k];
	else s[2]=1;
	if(k>1)s[3]=board[b][k-1];
	else s[3]=1;
	return s[0]*s[1]*s[2]*s[3];
}

int main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			cin>>board[i][j];
	}
	rx=0;ry=0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(calc(j,i)==k)
			{
				rx=j;
				ry=i;
				break;
			}
		}
		if(rx!=0)break;
	}
	cout<<rx<<" "<<ry<<endl;
	return 0;
}