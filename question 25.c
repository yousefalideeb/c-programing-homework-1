#include <stdio.h>

int main()
{
	int n1, n2, greater, smaller, n3;
    printf ("Enter two numbers\n");
    scanf("%d%d",&n1, &n2);
    if(n1>n2)
	{
		greater=n1;
		smaller=n2;
	}
	else
	{
		greater=n2;
		smaller=n1;
	}
	while(1)
	{
		n3=greater%smaller;
		if(n3==0)
		{
			printf("HCF of %d and %d = %d",n1,n2,smaller);
			break;
		}
		greater=smaller;
		smaller=n3;
	 }
	 return 0; 
}
