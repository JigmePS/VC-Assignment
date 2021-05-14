// 2.WAP to sum digits on any given number using function.
#include<stdio.h>
void main()
{
    int sum=digitsum();
    printf("Sum of digits: %d",sum);
}
int digitsum()
{
    int num,tem,sum=0;
    printf("n = ");
    scanf("%d",&num);
    while(num!=0){
        tem=num%10;
        num=num/10;
        sum=sum+tem;
    }
    return sum;
}