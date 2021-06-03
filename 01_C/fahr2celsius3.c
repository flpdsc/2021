#include <stdio.h>

int main(void)
{
	int fahr = 100;
	int celsius1000 = 1000 * 5 * (fahr - 32) / 9;
	
	int left = celsius1000 / 1000;
	//int right = (celsius1000 + 5) - (left * 1000);
	int right = celsius1000 % 1000 + 5;
	right = right/10;

	printf("fahr : %d ---> celsius : %d.%d\n",fahr, left, right);
	
	return 0;
}
