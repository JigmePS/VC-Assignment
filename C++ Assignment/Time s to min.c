//Q 2
//WAP that input seconds as input and converts to minutes.
#include <stdio.h>
void main ()
{
	float s,m;
	printf("Convert second to minute\n");
	printf("Second:");
	scanf("%f",&s);
	m=s/60;
	printf("Minute: %f",m);
}