#include <stdio.h>

typedef struct {
	char name[21];
	int kor;
	int eng;
	int mat;
	int sum;
	double average;
	int rank;
} Student;

int main(void)
{
	Student students[10];
	for (int i = 0; i < 10; ++i) {
		scanf("%s %d %d %d", students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
		//배열이름이 식에서 쓰이면 첫번째 엘리먼트의 시작주소임 (=&students[i].name[0])
		students[i].sum = students[i].kor + students[i].eng + students[i].mat;
		students[i].average = (double)students[i].sum / 3;
		students[i].rank = 1;	
	}

	// rank
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j){
			if (students[i].sum < students[j].sum)
			 students[i].rank++;
		}
	}

	//sorting by score (selection sorting)
	for (int i = 0; i < 10 - 1; ++i) {
		for(int j = i + 1; j < 10; ++j) {
			if(students[i].sum < students[j].sum) {
				Student tmp = students[i];
				students[i] = students[j];
				students[j] = tmp;
			}
		}
	}


	
	printf("		<< score >>			\n");
	printf("-----------------------------------------------\n");
	printf("name                 kor eng mat sum avg    rnk\n");
	printf("-----------------------------------------------\n");
	for (int i = 0; i < 10; ++i) {
		printf("%-20s %3d %3d %3d %3d %6.2f %3d\n", students[i].name, students[i].kor, students[i].eng, students[i].mat, students[i].sum, students[i].average, students[i].rank);
	}

	return 0;
}
