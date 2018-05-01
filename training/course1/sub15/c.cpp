#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int n;
int box[9];
bool flag[10];

bool cek(int pos)
{
	if((box[pos+1]>box[pos])&&(box[pos+1]>box[pos+2])) return 1;
	else if ((box[pos+1]<box[pos])&&(box[pos+1]<box[pos+2])) return 1;
	else return 0;
}

void permut (int a)
{
	if((a>(n-3))||(cek(a)))
	{
		if(a==0)
		{
			for(int i=n-1;i>=0;i--)
				cout<<box[i];
			cout<<endl;
		}
		else
		{
			for(int i=1;i<=n;i++)
			{
				if(flag[i])
				{
					box[a-1]=i;
					flag[i]=0;
					permut(a-1);
					flag[i]=1;
				}
			}
		}
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<10;i++)
		flag[i]=1;
	permut(n);
	return 0;
}