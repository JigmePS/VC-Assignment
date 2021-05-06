//Q 6
//WAP that prompts user to enter any integer from 1 to 7 and displays the corresponding day of the week.
#include<stdio.h>
void main()
{
	int day;
	
	scanf("%d",&day);
	
	switch(day)
	{
		case 1: printf("Sunday");
		break;
		
		case 2: printf("Monday");
		break;
		
		case 3: printf("Tuesday");
		break;
		
		case 4: printf("Wednesday");
		break;
		
		case 5: printf("Thursday");
		break;
		
		case 6: printf("Friday");
		break;
		
		case 7: printf("Saturday");
		break;
		
		default:
			printf ("Invalid");
	}
}