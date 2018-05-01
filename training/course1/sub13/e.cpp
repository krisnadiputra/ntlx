#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int h[1000],n,k;

int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>h[i];
	sort(h,h+n);
	cout<<h[k-1]<<endl;
	return 0;
}