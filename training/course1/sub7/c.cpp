#include<iostream>
#include<cstdio>

using namespace std;

int n,num;

int main()
{
	cin>>n;
	num=0;
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<num;
			num++;
			num%=10;
		}
		cout<<endl;
	}
	return 0;
}