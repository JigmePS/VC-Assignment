//Q 11
//WAP todisplay multiplication table 1 to 10.
#include <stdio.h>
void main()
{
	int i,a,m;
	for(a=1;a<=10;a++)
	{
	for(i=1;i<=10;i++)
	{
		m=i*a;
		printf("%d x %d = %d\n",a,i,m);
	}
	printf("\n");
}
}