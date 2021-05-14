//Q 7
/*WAP to read the marks secured by a student and display the appropriate message as follows:
Marks greater or equal to 40 and less than 65 display PASS.
Marks greater or equal to 65 and less than 80 display FIRST DIVISION.
Marks greater or equal to 80 display DISTINCTION.
Otherwise FAIL.*/
#include<stdio.h>
void main()
{
	int R1,R2,R3,R4;
	
	printf("Subject\t\tMarks\n");
	printf("English\t\t");
	scanf("%d",&R1);
	printf("Discrete Maths\t");
	scanf("%d",&R2);
	printf("ICT\t\t");
	scanf("%d",&R3);
	printf("C Programming\t");
	scanf("%d",&R4);
		
	float P;
	
	P=(R1+R2+R3+R4)/4;
	printf("\nPercentage: %f",P);
	
	printf("\nRemark:\t");
	if (P>=80 && P<=100)
	{
		printf("DISTINCTION");
	}
	else if (P>=65)
	{
		printf("FIRST DIVISION");
	}
	else if (P>=40)
	{
		printf("PASS");
	}
	 else if (P>=0)
	{
		printf("FAIL");
	}
	else
	{
		printf("ERROR");
	}
}