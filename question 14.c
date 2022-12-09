#include <stdio.h>

int main()
{
	int number;
    do{
	printf("enter a positive integer\n");
	scanf("%d",&number);
   }while(number<0);
   
   if (number == 0){
   	  printf("%d!= %d",number,1);
   }else{
   	   int i=1,f=1;
   	   while(i<=number)
   	   	 f = f*i;
   	   	 i++;
   	   	 printf("%d!= %d",number,f);
   }
   	return 0;
}
