#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

bool board[128][128];
int r,c,cek2,temp;
vector <int> hasil;

int cek(int x1, int y1, int x2, int y2)
{
	for(int i=x1;i<=x2;i++)
	{
		for(int j=y1;j<=y2;j++)
		{
			if(board[i][j]!=board[x1][y1])
				return -1;
		}
	}
	return board[x1][y1];
}

void lookone(int b1, int k1, int b2, int k2)
{
	int cekresult;
	cekresult=cek(b1,k1,b2,k2);
	if(cekresult==1) hasil.push_back(temp);
	else if((cekresult==-1)&&(b2>b1) && (k2>k1))
	{
		//cout<<b1<<" "<<k1<<" "<<b2<<" "<<k2<<endl;
		//cout<<cekresult<<endl;
		temp*=10;
		//cout<<temp<<endl;
		lookone(b1,k1,b2-(b2-b1+1)/2,k2-(k2-k1+1)/2);
		temp+=1;
		//cout<<temp<<endl;
		lookone(b1,k2-(k2-k1+1)/2+1,b2-(b2-b1+1)/2,k2);
		temp+=1;
		//cout<<temp<<endl;
		lookone(b2-(b2-b1+1)/2+1,k1,b2,k2-(k2-k1+1)/2);
		temp+=1;
		//cout<<temp<<endl;
		lookone(b2-(b2-b1+1)/2+1,k2-(k2-k1+1)/2+1,b2,k2);
		temp/=10;
	}
}

int main()
{
	for (int i=0;i<128;i++)
	{
		for(int j=0;j<128;j++)
			board[i][j]=0;
	}
	cin>>r>>c;
	for (int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cin>>board[i][j];
	}
	cek2=2;
	while((cek2<r)||(cek2<c))
		cek2*=2;
	r=cek2; c=cek2;
	temp=1;
	lookone(0,0,r-1,c-1);
	cout<<hasil.size()<<endl;
	for(int i=0;i<hasil.size();i++)
		cout<<hasil[i]<<endl;
	return 0;
}