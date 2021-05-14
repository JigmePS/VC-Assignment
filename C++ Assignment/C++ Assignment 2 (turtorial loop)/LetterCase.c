/*Q5
WAP to convert given character to lowercase if it is in uppercase and viceversa.*/
#include<stdio.h>
void main()
{
	char c1,c2;
	scanf("%c",&c1);
	c1>=65 && c1<=122;
	if(c1>=97)
	{
		c2=c1-32;
		printf("%c",c2);
	}
	else
	{
		c2=c1+32;
		printf("%c",c2);
	}
}