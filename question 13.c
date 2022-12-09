#include <stdio.h>

int main()
{
	int i,j;
	printf("multiplication table for 6 is: ");
	scanf("%d", &i);
	for (i=6; i<7; i++)
	{
	 for(j=1; j<=12; j++)	
	{
		printf("%d * %d =%d\n",i , j, i*j);
    }
	printf("\n==========\n");	
  }
  return 0;
}
