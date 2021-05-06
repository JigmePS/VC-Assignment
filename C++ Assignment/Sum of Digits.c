//Q 8
//WAP to read a positive integer and display the sum of digits in it.
#include<stdio.h>
void main()
{
	int num,d,sum=0;
	
    printf("Enter positive integer:\n");
    scanf("%d",&num);
    
    if(num>0)
	{
    while(num!=0)
	{
        d=num%10;
        num=num/10;
        sum=sum+d;
		}
	}
    else
	{
	printf("Enter positive integer");
	}
    printf("Sum of Digits: %d",sum);
}