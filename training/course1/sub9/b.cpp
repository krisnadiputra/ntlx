#include<iostream>
#include<cstdio>

using namespace std;

int d[100000],n;

int main()
{
	n=0;
	while(cin>>d[n])
		n++;
	for(int i=n;i>0;i--)
		cout<<d[i-1]<<endl;	
	return 0;	
}