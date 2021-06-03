#include <stdio.h>

int main(void)
{
	const char grades[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
	//고정 (배열 내 값 바꿀 수 없음)

	int score;
	scanf("%d", &score);

	char grade;
	grade = grades[score / 10];	
	
	printf("Score : %d -- Grade : %c\n", score, grade);
	return 0;
}
