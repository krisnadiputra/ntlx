#include<iostream>
#include<cstdio>

using namespace std;

int n,a,tot;

int main()
{
	tot=0;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a;
		tot+=a;
	}
	cout<<tot<<endl;
	return 0;
}