#include<iostream>
#include<cstdio>

using namespace std;

int n;

int f(int x)
{
	if(x==1)return 1;
	else if(x%2==1) return x*f(x-1);
	else return x/2*f(x-1);
}

int main()
{
	cin>>n;
	cout<<f(n)<<endl;
	return 0;
}