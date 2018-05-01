#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string a;
int pos;
char temp;
bool unders;


int main()
{
	cin>>a;
	if(a.find("_")!=string::npos)
	{
		unders=0;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='_')
			{
				unders=1;
				continue;
			}
			if(unders)
			{
				cout<<(char)(a[i]-32);
				unders=0;
			}
			else cout<<a[i];
		}
		cout<<endl;
	}
	else 
	{
		for(int i=0;i<a.length();i++)
		{
			if((int)a[i]<96)
				cout<<"_"<<(char)(a[i]+32);
			else cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}