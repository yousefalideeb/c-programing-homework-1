#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("last digit is: %d",num%10);
	while(num>10)
	  num=num/10;
	printf("\nFirst digit is: %d",num);
	return 0;
}
