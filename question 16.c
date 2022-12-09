#include <stdio.h>

int main()
{
	int A, sum=0;
	printf("Even numbers between 1000 to 2000: \n");
	for(A=1000;A<2000;A++)
	{
		if(A%2==0)
		{
			printf("%d ",A);
		}
	}
	printf("\n");
	
	printf("\n the sum of all even numbers between 1000 to 2000: \n");
	for(A=1000;A<2000;A++)
	{
		if(A%2==0)
		   sum=sum + A;   
	}
    printf("%d",sum);
	return 0;
}
