/*5.WAP to add,multiply,divide and substract 2 numbers given by the user.
    Use separate function foradd,multiply,divide and substract.Display result from main function. */
#include<stdio.h>
int Add(int,int);
int Multiply(int,int);
int Divide(int,int);
int Substract(int,int);
void main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);
    printf("Sum = %d\n",Add(a,b));
    printf("Product = %d\n",Multiply(a,b));
    printf("Quotient = %d\n",Divide(a,b));
    printf("Difference = %d\n",Substract(a,b));
}
int Add(int x,int y)
{
    return x+y;
}
int Multiply(int x, int y)
{
    return x*y;
}
int Divide(int x, int y)
{
    return x/y;
}
int Substract(int x, int y)
{
    return x-y;
}