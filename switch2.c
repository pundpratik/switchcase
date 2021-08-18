#include<stdio.h>
int main()
{
	int ch,a,b;
	printf("\n enter any two number");
	scanf("%d%d",&a,&b);
	printf("\n enter your choice \n1.addition of number\n2.subtraction of number\n3.multiplication of number\n4.remainder of number\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
				printf("\n addition of two number is %d",(a+b));	
			break;
		case 2:
				printf("\n subtraction of two number is %d",(a-b));	
			break;
		case 3:
				printf("\n multiplication of two number is %d",(a*b));
				break;
		case 4:
				printf("\n remainder of two number is %d",(a%b));
				break;
		default:
				printf("\n you select wrong choice");	
	}
	return 0;
}
