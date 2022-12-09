#include <stdio.h>

int main()
{
	int i=5,s=0;
	while(i<=100){
        printf("%d\n",i);
        i=i+5;
        s++;
    }
    printf("\n The number of values is:\n  %d",s);  
  return 0;
}
