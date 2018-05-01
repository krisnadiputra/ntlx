#include<cstdio>
#include<iostream>

using namespace std;

int n,k,box[9];

void kombin(int a)
{
	if(a==0)
	{
		for(int i=k-1;i>=0;i--)
		{
			cout<<box[i];
			if(i!=0)cout<<" ";
		}
		cout<<endl;
	}
	else
	{
		if(a==k)
		{
			for(int i=1;i<=n;i++)
			{
				box[a-1]=i;
				kombin(a-1);
			}
		}
		else
		{
			for(int i=box[a]+1;i<=n;i++)
			{
				box[a-1]=i;
				kombin(a-1);
			}
		}
	}
}

int main()
{
	cin>>n>>k;
	kombin(k);
	return 0;
}