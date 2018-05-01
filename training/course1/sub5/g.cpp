#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int x,y,x2,y2;

int main()
{
	cin>>x>>y>>x2>>y2;
	cout<<(abs(x-x2)+abs(y-y2))<<endl;
	return 0;
}