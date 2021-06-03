#include <stdio.h>

int main(void)
{
	int sum = 0;

	for( int i = 1 ; i <= 100 ; i=i+2 )
		sum = sum + i;

	printf("Odd Sum :  %d\n",sum);

	return 0;
}
