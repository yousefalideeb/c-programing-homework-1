#include <stdio.h>

int main()
{
	int num, count=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	printf("the number of digits is: %d",count);
	return 0;
}
