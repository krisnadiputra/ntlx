#include<iostream>
#include<cstdio>

using namespace std;

int bin[1001], temp,n,ma;

int main()
{
	cin>>n;
	for (int i=0;i<1001;i++)
		bin[i]=0;
	for(int i=0;i<n;i++)
	{		
		cin>>temp;
		bin[temp]++;
	}
	ma=1000;
	for(int i=1000;i>0;i--)
	{
		if(bin[i]>bin[ma])ma=i;
	}
	cout<<ma<<endl;
	return 0;
}