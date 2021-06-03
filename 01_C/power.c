#include <stdio.h>

long long power(int base, int exp)
{

	long long result = 1LL;
	for (int i = 1 ; i <= exp ; i++)
		result *= base;	//result = result * base;

	return result;
}

int main(void)
{
	for (int i = 0 ; i <= 32 ; i++){
		long long result = power(2, i);
		printf("2 power of %d = %lldLL\n", i, result);
	}

	return 0;
}
