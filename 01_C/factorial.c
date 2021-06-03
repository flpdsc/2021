#include <stdio.h>

long long factorial (int n)
{
	long long  result = 1LL;
	for (int i = 2 ; i <= n ; ++i)
		result *= i;

	return result;
}

int main(void)
{

	for (int i = 1 ; i <= 100; ++i) {
		long long result = factorial(i);
		printf("%d! = %lld\n", i, result);
	}

	return 0;
}
