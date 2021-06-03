#include <stdio.h>

int main(void)
{
	int score;
	scanf("%d", &score);

	if (score >= 60){
		printf("score : %d --pass\n",score);
	} else{
		printf("score : %d --fail\n",score);
	}
	return 0;
}
