#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

vector<string> arr;
int n;
string inp;

bool comp(string a, string b)
{
	int la,lb;
	la=a.length();
	lb=b.length();
	if(la<lb) return 1;
	else if(la==lb) return a<b;
	else return 0;
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>inp;
		arr.push_back(inp);
	}
	sort(arr.begin(),arr.end(),comp);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
	return 0;
}