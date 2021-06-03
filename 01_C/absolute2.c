#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	int absoluteValue;
	//absoluteValue = ???;
	
	if (num >= 0) {
		absoluteValue = num;
	} else {
		absoluteValue = -num;
	}


	printf("absolute value : %d\n", absoluteValue);

	return 0;
}
