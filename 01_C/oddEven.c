#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	int isOdd;
	isOdd = (num % 2 == 1);

	printf("%d is a odd number : %d\n", num, isOdd);

	return 0;
}
