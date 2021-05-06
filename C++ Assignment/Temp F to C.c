// Q 1
//Write a program that converts the temperature in Fahrenheit to Celcius.
#include<stdio.h>
void main ()
{
	float F,C;
	printf("Convert Fahrenheit to Celcius\n");
	printf("Temperaure in Fahrenheit :");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("Temperature in Celcius : %f C",C);
}