#include <stdio.h>
#include <stdlib.h>

int main(){
    float n,sum=0,m=2;
    printf("enter the n number\n");
    scanf("%f", &n);
        while(m<=n){
        sum=sum+1/m;
        m=m*2;
    }

    printf("the sum is:\n%f",sum);

   return 0;
    }
