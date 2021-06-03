#include <stdio.h>

int main(void)
{

	int width, height;
	double area;

	printf("Input Width Height : ");	
	scanf("%d %d",&width, &height);
	area = width * height / 2.0;
	
	printf("Area of triangle : %.1f\n",area);
	
	return 0;
}
