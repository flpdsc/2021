#include <stdio.h>

int main(void)
{
	int fahr;
	int celsius;
	int celsius2;
	
	fahr = 100;

	celsius = 1000 * (fahr - 32) * 5 / 9 + 5; //37782
	celsius2 = celsius - (celsius / 1000 * 1000);
	celsius = celsius / 1000;
	celsius2 = celsius2 / 10;
	
	printf("fahr : %d ---> celsius : %d.%d\n",fahr, celsius, celsius2);
	
	return 0;
}
