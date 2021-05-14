// 1.WAP to check whether number is even or odd using function.
#include<stdio.h>
void main()
{
	parity();
}
int parity()
{
    int num;
    printf("n = ");
    scanf("%d",&num);
    printf("Parity: ");
	if(num%2==0)
	{
        printf("Even");
    }
    else
	{
        printf("Odd");
    }
}