#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	if (num > 0)
		printf("%d is a positive number\n", num);
	else if (num == 0){
		printf("%d is a zero number\n", num);
	} else{
		printf("%d is a negative number\n",num);
	}
	
	return 0;
}
