#include <stdio.h>

int main(void)
{
	int nums[]={50,40,10,100,30,20,60,70,80,90};
	
	int value;
	scanf("%d", &value);

	int i;
	for (i = 0; i<10 ; ++i){
		if (value==nums[i])
			break;
	}

	if (i<10)
		printf("%d is found. index : %d\n", value, i);
	else
		printf("%d is not found.\n", value);

	return 0;
}
