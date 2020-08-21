#include<stdio.h>
#include<math.h>
int convert(long long n)
{
	int dec=0,rem,i=0;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		dec=dec+rem*pow(2,i);
		i=i+1;
	}
	return dec;
}
int main()
{
	long long n;
	printf("Enter a binary number");
	scanf("%lld",&n);
	int s=convert(n);
	printf("%d  ",s);
}
