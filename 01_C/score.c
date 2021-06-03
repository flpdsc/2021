#include <stdio.h>

int main(void)
{

	int kor, eng, mat, sum;
	double average;
	
	scanf("%d %d %d",&kor, &eng, &mat);
	sum = kor + eng + mat;
	average = (double)sum / 3;
	
	printf("SUM : %d\tAVERAGE : %.2f\n", sum, average);
	
	return 0;
}
