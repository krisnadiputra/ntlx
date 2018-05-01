#include<iostream>
#include<cstdio>

using namespace std;
bool flag[1000001];
int n,inp,ctr;

int main()
{
	flag[0]=0;flag[1]=0;
	for(int i=2;i<1000001;i++)
		flag[i]=1;
	for(int i=2;i<=1000;i++)
	{
		ctr=i*i;
		while(ctr<=1000000)
		{
			flag[ctr]=0;
			ctr+=i;
		}
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>inp;
		if(flag[inp])cout<<"YA"<<endl;
		else cout<<"BUKAN"<<endl;
	}
	return 0;
}