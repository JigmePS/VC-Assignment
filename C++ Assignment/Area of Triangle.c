//Q 4
//WAP to ask the user three sides of a triangle and display the area.Before computing area check whether the triangle is formed by the given sides or not.
#include<stdio.h>
void main()
{
	int a,b,c,s,A;
	
	printf("Enter three sides of triangle:\n");
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	
	if (a+b>c && b+c>a && a+c>b)
	{
		printf("Area of triangle: %d",A);
	}
	else
	{
		printf("Sides do not form triangle.");
	}
}