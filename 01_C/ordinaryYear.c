#include <stdio.h>

int main(void)
{
	int year;
	int isOrdinary;

	scanf("%d",&year);
//	isOrdinary = !( year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
	isOrdinary = (year % 4 != 0 || year % 100 == 0 && year % 400 != 0);
//	isOrdinary = (year % 400 != 0 && year % 100 == 0 || year % 4 !=0);
	
	printf("%d is an odinary year : %d\n", year, isOrdinary);

	return 0;
}
