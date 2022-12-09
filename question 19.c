#include <stdio.h>

int main()
{
	int number;
	int counter;
	printf("Enter a number \n");
	scanf("%d",&number);
	
	for(counter=1;counter<=12;counter++){
		printf("%d * %d = %d\n",number,counter,number*counter);
	}
	return 0;
}
