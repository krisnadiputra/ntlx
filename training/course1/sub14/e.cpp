#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int n;

string conv(int x)
{
	if(x==1) return "1";
	else if(x==2) return "10";
	else if (x%2==1)return conv(x/2)+"1";
	else return conv(x/2)+"0";
}

int main()
{
	cin>>n;
	cout<<conv(n)<<endl;
	return 0;
}