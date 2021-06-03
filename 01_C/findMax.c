#include <stdio.h>

int main(void)
{
	int nums[]={50,40,10,100,30,20,60,70,80,90};
	
	int max=nums[0];
	
	for (int i=1;i<10;++i)
		if(max <nums[i]) max = nums[i];

	printf("max : %d\n", max);

	return 0;
}
