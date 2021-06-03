#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);

	if (num % 2/*== 0*/){
		printf("%d is an odd Number\n",num); 
	} else{
		printf("%d is an even Number\n",num);
	}

	return 0;
}
