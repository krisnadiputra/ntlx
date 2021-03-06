#include<iostream>
#include<cstdio>

using namespace std;

int n,dat[100000],s,l,r,q;
int indl,indr;

int lookfor(bool w, int val)
{
	int pl,pr,pm,pos;
	pos=-1;
	pl=0;
	pr=n-1;
	while(pl<=pr)
	{
		pm=(pl+pr)/2;
		if(dat[pm]==val)
		{
			pos=pm;
			break;
		}
		else if (dat[pm]>val)pr=pm-1;
		else pl=pm+1;
	}
	if(pos!=-1)
	{
	while((pos<n-1)&&(dat[pos+1]==val))
		pos++;
	if(!w)pos++;
	}
	else
	{
		if(w)pos=pr;
		else pos=pl;
	}
	return pos;
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>dat[i];
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>l>>r;
		if(l==r)cout<<0<<endl;
		else
		{
			if((r<dat[0])||(l>=dat[n-1]))cout<<0<<endl;
			else if((l<dat[0])&&(r>=dat[n-1]))cout<<n<<endl;
			else if((l<dat[0])&&(r<dat[n-1])&&(r>=dat[0]))
			{
				indr=lookfor(1,r);
				cout<<indr+1<<endl;
			}
			else if((l>=dat[0])&&(l<dat[n-1])&&(r>dat[n-1]))
			{
				indl=lookfor(0,l);
				cout<<n-indl<<endl;
			}
			else
			{
				indl=lookfor(0,l);
				indr=lookfor(1,r);
				cout<<indr-indl+1<<endl;
			}
		}
	}
	return 0;
}