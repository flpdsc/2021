#include <stdio.h>

int main(void)
{
	int nums[6] = {11, 42, 36, 9, 45, 21};
	int bonus;
	printf("bonums num: ");
	scanf("%d", &bonus);

	for (int i = 1; i <= 6; ++i){
		for (int j = 0; j < 6; ++j){
			if (i == j)
				printf("%2d ", bonus);
			else
				printf("%2d ", nums[j]);
		}
		printf("\n");
	}
	return 0;
}
