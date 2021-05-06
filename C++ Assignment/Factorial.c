//Q 9
//WAP to read a non negative integer and display its factorial.
#include<stdio.h>
void main ()
{
	float num,i,F;
	
	printf("Factorial of ");
	scanf("%f",&num);
	
	if (num>0)
	{
		for (i=1;i<=num;i++)
		{
		F=F*i;
		}
	printf("\n%f",F);
	}
	else
	{
		printf("Enter a positive integer");
	}
}