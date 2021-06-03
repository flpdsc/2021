#include <stdio.h>

int main(void)
{
	int nums[]={50,40,10,100,30,20,60,70,80,90};
	
	int sum = 0;

	for(int i=0 ; i<10 ; ++i)
		sum += nums[i]; //sum = sum + nums[i];

	printf("sum : %d\n", sum);

	return 0;
}
