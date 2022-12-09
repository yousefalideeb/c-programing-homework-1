#include <stdio.h>

int main()
{
	int temperature;
	scanf("%d",&temperature);
	if(temperature<32)
	    printf("below the freezing point");
	else
	    printf("above the freezing point");
	return 0;
}
