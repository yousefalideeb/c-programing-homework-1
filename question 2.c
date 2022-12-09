#include <stdio.h>

int main()
{
	int radius, area;
	printf("Enter the radius of the circle");
	scanf("%d", &radius);
	area=3.14*radius*radius;
	printf("area of the circle is ",area);
	return 0;
}
