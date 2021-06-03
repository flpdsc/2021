#include <stdio.h>

int main(void)
{
	int a;
	int nums[10];

	int *p;

	p = &a;		// pointer는 반드시 대상을 가리키고
	*p = 100;	// 역참조 해야 함
	p = &nums[2];
	*p = 200;

	return 0;
}
