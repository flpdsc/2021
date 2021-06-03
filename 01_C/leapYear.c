#include <stdio.h>

int main(void)
{
	int year;
	int isLeap;

	scanf("%d",&year);
	isLeap = ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
	//isLeap = ( year % 400 == 0 || year % 4 == 0 && year % 100 != 0 );
	//Short-cut circuit
	
	printf("%d is a leap year : %d\n", year, isLeap);

	return 0;
}
