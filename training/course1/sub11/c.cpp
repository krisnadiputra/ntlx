#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

string a;
int k;

int main()
{
	cin>>a>>k;
	for (int i=0;i<a.length();i++)
		cout<<(char)((a[i]+k-97)%26+97);
	cout<<endl;
	return 0;
}