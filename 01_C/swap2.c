#include <stdio.h>

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main(void)
{
	int a, b;
	a = 100;
	b = 200;
	printf("a : %d\tb : %d\n", a, b);

	swap(a, b);

	printf("a : %d\tb : %d\n", a, b);

	return 0;
}
