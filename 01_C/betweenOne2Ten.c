#include <stdio.h>

int main(void)
{
	int num;

	int isRight;
	scanf("%d", &num);
	isRight = 1 <= num && num <= 10;
	
	printf("%d is btw 1 to 10 : %d\n", num, isRight);
	return 0;
}
