#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	printf("%d is %s Number\n",num,(num%2) ? "odd" : "even");
	return 0;
}
