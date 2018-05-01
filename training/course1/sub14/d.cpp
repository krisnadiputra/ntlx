#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string inp;

bool pal (string a)
{
	int la=a.length();
	if (la==1) return 1;
	else if (la==2) return (a[0]==a[1]);
	else if (a[0]==a[la-1])return pal(a.substr(1,la-2));
	else return 0; 
}

int main()
{
	cin>>inp;
	if(pal(inp))cout<<"YA"<<endl;
	else cout<<"BUKAN"<<endl;
	return 0;
}