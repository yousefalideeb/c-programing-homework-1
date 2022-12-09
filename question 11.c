#include <stdio.h>

int main()
{
int number[10], i, sum = 0;
printf("Enter the 10 numbers:");
for (i = 0; i < 10; i++)
scanf("%d", &number[i]);

printf("the sum and average of 10 numbers is\n");
for (i = 0; i < 10; i++)
{
printf("% ", number[i]);
sum = sum + number[i];
}
printf(" \nThe sum of the 10 numbers is= %d\n",sum) ;
printf("The average of the 10 numbers is = %.02f\n", sum / 10.0);
return 0;
}


