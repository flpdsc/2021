#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void)
{
	
	int radius;
	double area;
	
	printf("input radius : ");	
	scanf("%d",&radius);
	area = PI * pow(radius, 2);
	
	printf("Area of triangle : %.2f\n",area);
	
	return 0;
}
