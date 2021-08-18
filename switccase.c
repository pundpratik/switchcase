#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter any alphabet ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("\n aplhabet is vowel");
		break;
		default:
			printf("\n aplhabet is not a vowel");
					
	}
	return 0;
}
