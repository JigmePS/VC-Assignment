/*Q6
WAP to read numbers entered by the user until user enters 0.Among them sum all the 
positive numbers and all the negative numbers separately.Also display count of positive 
numbers and negative numbers.At last display average of all positive as well as negative 
numbers.*/
#include<stdio.h>
void main()
{
int a,sp=0,pc=0,sn=0,nc=0;
printf("No.: ");
do{
	scanf("%d",&a);
	if(a>0)
	{
		sp=sp+a;
		pc=pc+1;
	}
	else if(a<0)
	{
		sn=sn+a;
		nc=nc+1;
	}
	else if(a==0)
	{
		break;
	}
}while(a!=0);
printf("+ive integers sum: %d\n",sp);
printf("+ive integers count: %d\n",pc);
printf("+ive integers avg: %d\n\n",sp/pc);
printf("-ive integers sum: %d\n",sn);
printf("-ive integers count: %d\n",nc);
printf("-ive integers avg: %d",sn/nc);
}