#include<iostream>
#include<cstdio>

using namespace std;

int a,b;

int reverse(int x)
{
    int temp = x;
    int ret  = 0;

    while (temp > 0) {
        ret  = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }
    return ret;
}

int main()
{
	cin>>a>>b;
	cout<<reverse(reverse(a)+reverse(b))<<endl;
	return 0;
}