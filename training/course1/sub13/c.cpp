#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int arr[100000],n;
double med;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	if(n%2==0)med=((double)(arr[n/2])+arr[n/2-1])/2;
	else med=arr[n/2];
	
	printf("%.1lf\n",med);
	return 0;
}