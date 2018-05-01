#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string a;
int k;

int main()
{
	cin>>a;
	for (int i=0;i<a.length();i++)
	{
		k=(int)a[i];
		if(k>96) k-=32;
		else k+=32;
			cout<<(char)k;
	}
	cout<<endl;
	return 0;
}