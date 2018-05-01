#include<iostream>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;

vector <string> kode;
string inp, gstring;
bool board[128][128];
int r,c,cek2,n;

void targetone(int b1, int k1, int b2, int k2, int pos)
{
	if(pos+1==gstring.length())
	{
		for(int i=b1;i<=b2;i++)
		{
			for(int j=k1;j<=k2;j++)
				board[i][j]=1;
		}
	}
	else
	{
		if(gstring[pos+1]=='0') targetone(b1,k1,b2-(b2-b1+1)/2,k2-(k2-k1+1)/2,pos+1);
		else if(gstring[pos+1]=='1')targetone(b1,k2-(k2-k1+1)/2+1,b2-(b2-b1+1)/2,k2,pos+1);
		else if(gstring[pos+1]=='2')targetone(b2-(b2-b1+1)/2+1,k1,b2,k2-(k2-k1+1)/2,pos+1);
		else if(gstring[pos+1]=='3')targetone(b2-(b2-b1+1)/2+1,k2-(k2-k1+1)/2+1,b2,k2,pos+1);
	}
}

int main()
{
	for (int i=0;i<128;i++)
	{
		for(int j=0;j<128;j++)
			board[i][j]=0;
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>inp;
		kode.push_back(inp);
	}
	cin>>r>>c;
	cek2=2;
	while((cek2<r)||(cek2<c))
		cek2*=2;
	for(int i=0;i<n;i++)
	{
		gstring=kode[i];
		targetone(0,0,cek2-1,cek2-1,0);
	}
	for (int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<board[i][j];
			if(j!=c-1)cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}