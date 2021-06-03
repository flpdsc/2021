#include "date.h"


/*
typedef struct {
	int year;
	int month;
	int day;
} Date;

void printDate(struct date d)
{                                
	printf("(%d/%d/%d)\n", d.year, d.month, d.day);
}

void printDate(const Date *pd)
{
//	printf("(%d/%d/%d)\n", (*pd).year, (*pd).month, (*pd).day); 
	//. 연산자 순위가 높아서 괄호 필수

	printf("(%d/%d/%d)\n", pd->year, pd->month, pd->day);
}
*/

int main(void)
{
	Date today;
	today.year = 2021;
	today.month = 1;
	today.day = 13;

//	struct date d;
//	d = today;

	//구조체가 없다면?
/*	int today_year, today_month, today_day;
	today_year =2021;
	today_month = 1;
	today_day= 13;

	int d_year, d_month, d_day;
	d_year = today_year;
	d_month = today_month;
	d_day = today_day;	*/

	Date birthday = {2005, 8, 2};
	
//	printDate(today);
	printDate(&today);
	
	return 0;
}
