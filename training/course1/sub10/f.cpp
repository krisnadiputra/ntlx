#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

typedef struct point{
	int x,y;
} point;

point arp[1000];
int ma,mi,temp,n,d;

int dist(point a, point b, int deg)
{
	return (int)(pow(abs(a.x-b.x),deg)+pow(abs(a.y-b.y),deg));
}

int main()
{
	cin>>n>>d;
	for(int i=0;i<n;i++)
		cin>>arp[i].x>>arp[i].y;
	ma=-1;mi=10000000;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			temp=dist(arp[i],arp[j],d);
			if(ma<temp)ma=temp;
			if(mi>temp)mi=temp;
		}
	}
	cout<<mi<<" "<<ma<<endl;
	return 0;
}