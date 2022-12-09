#include <stdio.h>

int main()
{
	int A,B,C;
	printf("A");
	scanf("%d",&A);
	printf("B");
	scanf("%d",&B);
	printf("C");
	scanf("%d",&C);
	if(A>B && A>C);
	   printf("A is the largest number");
	if(B>A && B>C);
	   printf("B is the largest number");
	if(C>A && C>B);
	   printf("C is the largest number");
	return 0;	
}
