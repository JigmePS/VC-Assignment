//Q 3
//WAP that prompts a user to input average marks of a student and add 10% bonus marks if his/her average marks is greater than or equal to 65%.
#include <stdio.h>
void main ()
{
	int m1,m2,m3,m4;
	printf("Subject\t\tMarks\n");
	printf("English\t\t");
	scanf("%d",&m1);
	printf("Maths\t\t");
	scanf("%d",&m2);
	printf("ICT\t\t");
	scanf("%d",&m3);
	printf("Programming\t");
	scanf("%d",&m4);
	printf("\n");
	float p1,p2;
	p1=(m1+m2+m3+m4)/4;
	p1>=0;
	if(p1>=65 && p1<=100)
	{
		p2=p1+10;
		printf("Percentage: %f",p2);
	}
	else if(p1<65)
	{
		printf("Percentage: %f",p1);
	}
	else
	{
		printf("Percentage: Invalid");
	}
}