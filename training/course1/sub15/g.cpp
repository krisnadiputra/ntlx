#include<iostream>
#include<cstdio>

using namespace std;

int board[25][25],ctr;
bool flag[25][25];
int b,k,m,n,res;

void hitung(int x, int y)
{
	if(flag[x][y] && board[x][y]==board[b][k])
	{
		flag[x][y]=0;
		ctr+=1;
		if(x>0) hitung(x-1,y);
		if(y>0) hitung(x,y-1);
		if(x<m-1) hitung(x+1,y);
		if(y<n-1)hitung(x,y+1);
	}
}

int main()
{
	for(int i=0;i<25;i++)
	{
		for(int j=0;j<25;j++)
			flag[i][j]=1;
	}
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>board[i][j];
	}
	cin>>b>>k;
	ctr=0;
	hitung(b,k);
	cout<<ctr*(ctr-1)<<endl;
	return 0;
}