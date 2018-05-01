#include<iostream>
#include<cstdio>
#include<string>

using namespace std;
string a,b;
int pos,lb;

int main()
{
	cin>>a>>b;
	lb=b.length();
	while(a.find(b)!=string::npos)
	{
		pos=a.find(b);
		a.erase(pos,lb);
	}
	cout<<a<<endl;
	return 0;
}