#include <stdio.h>


int sumArray(const int *pArr, int size)
{
	int sum = 0;
	for (int i = 0 ; i <size ; ++i)
		sum = sum + pArr[i]; // *(pArr + i)

	return sum;
}


int main(void)
{
	int nums[]={50,40,10,100,30,20,60,70,80,90};
	
	int sum;
	sum = sumArray(nums, 10); // sum = sumArray(&nums[0]);

	printf("sum : %d\n", sum);

	return 0;
}
