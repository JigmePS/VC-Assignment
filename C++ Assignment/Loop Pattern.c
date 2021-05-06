// Q 10
/* WAP to print the following pattern
1             5           1                   1   a
1 2           5 4         2 3               1 2   a b
1 2 3         5 4 3       4 5 6           1 2 3   a b c
1 2 3 4       5 4 3 2     7 8 9 10      1 2 3 4   a b c d
1 2 3 4 5     5 4 3 2 1               1 2 3 4 5           */
#include <stdio.h>
void main()
{
    //1st Pattern
    
    int a,b;
    for(a=1;a<=5;a++)
	{
        for(b=1;b<=a;b++)
		{
            printf("%d ",b);
        }
        printf("\n");
    }
    printf("\n");
    
    //2nd Pattern
    
    int c,d;
    
    for(c=5;c>=1;c--)
	{
        for(d=5;d>=c;d--)
		{
            printf("%d ",d);
        }
        printf("\n");
    }
    printf("\n");
    
    //3rd Pattern
    
    int e,f,g;
    
    for(e=1;e<=4;e++)
	{
        for(f=1;f<=e;f++)
		{
            printf("%d ",g);
            g++;
        }
        printf("\n");
    }
    printf("\n");
    
    //4th Pattern
    
    int h,i,j;
    
    for(h=1;h<=5;h++)
	{
        for(i=1;i<=5-h;i++)
		{
            printf("  ");
        }
        for(j=1;j<=h;j++)
		{
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");
    
    //5th Pattern
    
    int k,l,m,n;
    
    for(k=96;k<100;k++)
	{
        for(l=96;l<k+1;l++)
		{
            printf("%c ",l+1);
        }
        printf("\n");
    }
}