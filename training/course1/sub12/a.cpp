#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int n,x,win,wdif,temp,diftemp;

int main()
{
	cin>>n>>x;
	cin>>win;
	wdif=abs(x-win);
	for(int i=1;i<n;i++)
	{
		cin>>temp;
		diftemp=abs(temp-x);
		if((diftemp==wdif)&&(win>temp))
			win=temp;
		else if(diftemp<wdif)
		{
			win=temp;
			wdif=diftemp;
		}
	}
	cout<<win<<endl;
	return 0;
}