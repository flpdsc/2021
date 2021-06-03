#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);

	printf("%d is a %s year\n", year, 
		(year%4==0&&year%100!=0||year%400==0) ? "leap" : "ordinary");
	
	return 0;
}
