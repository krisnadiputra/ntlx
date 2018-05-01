#include<iostream>
#include<cstdio>

using namespace std;

int n;

void gunung(int a)
{
	if(a==1)cout<<"*"<<endl;
	else
	{
		gunung(a-1);
		for(int i=0;i<a;i++)
			cout<<"*";
		cout<<endl;
		gunung(a-1);
	}
}

int main()
{
	cin>>n;
	gunung(n);
	return 0;
}
