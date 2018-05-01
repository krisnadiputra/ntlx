#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string a,b,c,d;

int main()
{
	cin>>a>>b>>c>>d;
	a.erase(a.find(b),b.length());
	a.insert(a.find(c)+c.length(),d);
	cout<<a<<endl;
	return 0;
}