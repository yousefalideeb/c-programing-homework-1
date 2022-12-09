#include <stdio.h>

int main()
{
	long long int num, n, lastDigit;
	int arr[10], i;
	printf("Enter an integer\n");
	scanf("%lld",&num);
	n = num;
	for(i = 0; i < 10;i++){
		arr[i] = 0;
	}
	printf("The frequency of each digit in %d are:",num);
	while(n != 0){
	     lastDigit = n % 10;
	     arr[lastDigit] = arr[lastDigit]+ 1;
	     n = n /10;
}
for(i = 0; i < 10; i++){
	  printf("\n%d ==> %d\n", i, arr[i]);
}
return 0;
}
