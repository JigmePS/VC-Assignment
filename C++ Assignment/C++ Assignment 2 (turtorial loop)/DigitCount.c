/*Q4
WAP to count digits in a given number.*/
#include<stdio.h>
void main()
{
	int n,d;
	printf("n: ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		d++;
	}
	printf("Digits: %d",d);
}