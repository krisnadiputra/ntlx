#include<iostream>
#include<cstdio>

using namespace std;
bool flag[500001], pr;
int inp,ctr,temp;

int main()
{
	flag[0]=0;flag[1]=0;
	for(int i=2;i<500001;i++)
		flag[i]=1;
	for(int i=2;i*i<500001;i++)
	{
		ctr=i*i;
		while(ctr<=500000)
		{
			flag[ctr]=0;
			ctr+=i;
		}
	}
	pr=1;
	cin>>inp;
	for (int i=2;i<500001;i++)
	{
		if(inp==1)break;
		if(flag[i])
		{
			temp=0;
			while(inp%i==0)
			{
				inp/=i;
				temp++;
			}
			if(temp>0)
			{
				if(pr!=1)cout<<" x ";
				else pr=0;
				cout<<i;
				if(temp>1)cout<<"^"<<temp;
			}
		}
	}
	if(pr)cout<<inp;
	cout<<endl;
	return 0;
}