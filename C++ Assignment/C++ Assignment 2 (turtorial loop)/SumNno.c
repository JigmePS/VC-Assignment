/*Q3
WAP to find sum of natural numbers upto n where n is entered by the user.*/
#include<stdio.h>
void main()
{
	int n,i,s;
	printf("n: ");
	scanf("%d",&n);
	if (n>0)
	{
		for(i=0;i<=n;i++)
		{
			s=i+s;
		}
	printf("Sum of Natural no.s: %d",s);
	}
	else
	{
		printf("Error");
	}
}