#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3]; 
	int answer[3];
	int count;

	srand(time(NULL));

	for ( int i = 0 ; i < 3 ; ++i) {
		question[i] = rand() % 10;
	}

/* 중복 제거 (미완성)
	for ( int i = 0 ; i < 3-1 ; ++i) {
		for ( int j = i+1 ; j < 3 ; ++j ) {
			if (question[i] == question[j])
				question[j] = rand() % 10;		
			else break;
		}	
	}
	printf("%d%d%d",question[0],question[1],question[2]);
*/


	while (1) {
		++count;
		int strike = 0;
		int ball = 0;
		
		int answer[3];
		for ( int i = 0 ; i < 3 ; ++i ) {
			scanf("%d", &answer[i]);
		}	//하나하나 입력 -> 한번에 입력하여 각 배열에 들어가도록



	//count #strike, #ball
		for ( int i = 0 ; i < 3 ; i++ ) {
			for ( int j = 0 ; j < 3 ; j++){
				if (question[i] == answer[j]){
					if( i == j ) ++strike;
					else ++ball;
				}
			}
		}

		if (strike == 0 && ball == 0) 
			printf("OUT");
		else if (strike == 3)
			break;
		else
			printf("%d S %d B", strike, ball);
	}	

	printf("%d%d%d", question[0], question[1], question[2]);
	printf("Congraturations! your count : %d\n", count);

	return 0;
}
