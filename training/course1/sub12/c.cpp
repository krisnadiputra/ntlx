#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;

int n,q;
string nam,num;
map<string,string> phonebook;

int main()
{
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>nam>>num;
		phonebook.insert(pair<string,string>(nam,num));
	}
	for(int j=0;j<q;j++)
	{
		cin>>nam;
		if(phonebook.find(nam)!=phonebook.end())
			cout<<phonebook[nam]<<endl;
		else cout<<"NIHIL"<<endl;
	}
	return 0;	
}