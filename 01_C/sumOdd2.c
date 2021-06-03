#include <stdio.h>

int main(void)
{
	int sum = 0;
	int i = 1;

	while(i <= 100) {
		sum = sum + i;
		i = i + 2;
	}

	printf("Odd Sum :  %d\n",sum);

	return 0;
}
