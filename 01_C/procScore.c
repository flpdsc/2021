#include <stdio.h>

int main(void)
{
	int score1, score2, score3, score4, score5;
	scanf("%d %d %d %d %d", &score1, &score2, &score3, &score4, &score5);

	int sum=score1+score2+score3+score4+score5;

	double average = (double)sum/5;

	printf("sum : %d\taverage : %.2f\n", sum, average);

	return 0;
}
