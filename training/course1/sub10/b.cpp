#include<iostream>
#include<cstdio>

using namespace std;

int p1,p2,n,m;
char b1,b2;
int b[2][1000];

void change(char r1, int pos1, char r2, int pos2)
{
	int temp;
	temp=b[r1-65][pos1-1];
	b[r1-65][pos1-1]=b[r2-65][pos2-1];
	b[r2-65][pos2-1]=temp;
}

int main()
{
	cin>>n;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<n;j++)
			cin>>b[i][j];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>b1>>p1>>b2>>p2;
		change(b1,p1,b2,p2);
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<b[i][j];
			if(j!=n-1)cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}