#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int i,j;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a-i;j++)
		{
			printf(" ");
		}
		if(i==1 || i==a)
		{
			for(j=1;j<=a;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(j=1;j<=a;j++)
			{
				if(j==1 ||j==a)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
	   
		printf("\n");
	}
}
