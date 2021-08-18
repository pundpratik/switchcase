#include<stdio.h>
int main()
{
	int ch,num,year;
	printf("\n enter your choice 1.for square and cube,2.to find enter year leap or not");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("enter any number");
			scanf("%d",&num);
			printf("\n the square of a number=%d",(num*num));
			printf("\n the square of a number=%d",(num*num*num));
			break;
		case 2:
			printf("\n enter any year");
			scanf("%d",&year);
			if(year%4==0)
			{
				printf("\n entered year is a leap year");
				
			}
			else
			{
				printf("\n entered year is not a leap year");
			}
			break;
			default:
			printf("\n you select wrong choice please try again");
	}
	return 0;
}
