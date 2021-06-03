#include <stdio.h>

int main(void)
{
	int man, woman;

	printf("input #man, #woman : ");
	scanf("%d %d", &man, &woman);

	double manRatio, womanRatio;
	
//	manRatio = man * 100.0 / (man + woman);
//	womanRatio = 100.0 - manRatio;

	manRatio = (double)man / (man + woman) * 100;
	womanRatio = (double)woman / (man + woman) * 100;

	printf("manRatio : %.2f%%\n", manRatio);
	printf("womanRatio : %.2f%%\n", womanRatio);

return 0;
}
