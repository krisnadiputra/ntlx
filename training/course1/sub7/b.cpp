#include<iostream>
#include<cstdio>

using namespace std;

int n;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=(n-1);j>i;j--)
			cout<<" ";
		for(int k=0;k<i+1;k++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}