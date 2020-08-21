#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,digit=0,sum=0;
	cin>>a;
	int b=a;
	while(a!=0)
	{
		digit=digit+1;
		a=a/10;
	}
	a=b;
	while(b!=0)
	{
		int rem=b%10;
		sum=sum+pow(rem,digit);
		b=b/10;
	}
	if(sum==a)
	{
		cout<<"Armstrong Number";
	}
	else
	{
		cout<<"Not a Armstrong Number";
	}
}
