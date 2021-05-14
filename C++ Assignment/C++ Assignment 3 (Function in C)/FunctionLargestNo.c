// 3.WAP to find the largest among three numbers using function and display largest number from main.
#include<stdio.h>
void main()
{
    int largest=LargestNum();
    printf("Largest number: %d",largest);
}
int LargestNum()
{
    int num1,num2,num3;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
	{
        return num1;
    }
    else if(num2>num1 && num2>num3)
	{
        return num2;
    }
    else
	{
        return num3;
    }
}