//Q 5
//WAP to find the largest of three different integer numbers just entered by the user.
#include <stdio.h>
void main ()
{
	int a,b,c;
	
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b && a>c)
	{
	printf("The greatest number is %d",a);
	}
    else if(b>a && b>c)
	{
	printf("The greatest number is %d",b);
	}
    else if(c>b && c>a)
	{
	printf("The greatest number is %d",c);
	}
    else
	{
	printf("Two or more numbers are equal.");
	}
}
