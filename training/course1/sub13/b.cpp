#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string arr[1000],inp;
int n;

int ins(string a, int ptr)
{
	int np=-1;
	int ctr;
	
	if(ptr==0)
	{
		arr[0]=a;
		return 1;
	}
	else
	{
		for(int i=0;i<ptr;i++)
		{
			if(a < arr[i])
			{
				np=i;
				break;
			}
		}
		if(np==-1)
		{
			arr[ptr]=a;
			return ptr+1;
		}
		else
		{
			ctr=ptr;
			while(ctr>np)
			{
				arr[ctr]=arr[ctr-1];
				ctr--;
			}
			arr[np]=a;
			return np+1;
		}
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>inp;
		cout<<ins(inp,i)<<endl;
	}
	return 0;
}