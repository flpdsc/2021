#include <stdio.h>

int main(void)
{
	int score;
	scanf("%d", &score);

/*	if (score >= 60){
		printf("score : %d --pass\n",score);
	} else{
		printf("score : %d --fail\n",score);
	}
*/

	printf("Score : %d --- %s\n", score, (score>=60) ? "pass" : "fail");
	//conditional expression operator

	return 0;
}
