#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

typedef struct rice{
	int w;
	int c;
	double p;
} rice;

rice arr[1000];
int n,x,ctr;
double mon;

bool comp(rice a, rice b)
{
	return a.p>b.p;
}

int main()
{
	cin>>n>>x;
	for(int i=0;i<n;i++)
		cin>>arr[i].w;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].c;
		arr[i].p=double(arr[i].c)/arr[i].w;
	}
	sort(arr,arr+n,comp);
	ctr=0;
	mon=0;
	while((x>0)&&(ctr<n))
	{
		if(x>=arr[ctr].w)
		{
			mon+=arr[ctr].c;
			x-=arr[ctr].w;
		}
		else
		{
			mon+=(x*arr[ctr].p);
			x=0;
		}
		ctr++;
	}
	printf("%.5lf\n",mon);
	return 0;
}