#include <stdio.h>

int main(void)
{
	int score;
	char grade;
	
	scanf("%d", &score);
	
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else if (score >= 0) grade = 'F';
	
	printf("Score : %d --> Grade : %c\n",score, grade);
	return 0;
}
