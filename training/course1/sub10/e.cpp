#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int a,b,k,x,temp;

int dengklek (int s)
{
	return abs(a*s+b);
}

int main()
{
	cin>>a>>b>>k>>x;
	temp=dengklek(x);
	for(int i=0;i<k-1;i++)
		temp=dengklek(temp);
	cout<<temp<<endl;
	return 0;
}