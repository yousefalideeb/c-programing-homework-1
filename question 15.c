#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter a positive number\n");
	scanf("%d", &num);
	
	printf("\nNatural numbers from %d to 1 are:\n" , num);
	
	while(num)
	{
		printf("%d  ", num);
		num--;
	}
	printf("\n");
	
	return 0;
}
