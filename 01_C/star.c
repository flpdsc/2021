#include <stdio.h>

int main(void)
{
	int i,j;
// 1
	for(i=1;i<=5;++i){
		for(j=1;j<=i;++j)
			printf("*");
		printf("\n");
	}
// 2	
	for(i=1;i<=5;++i){
		for(j=1;j+i<=6;++j)
			printf("*");
		printf("\n");
	}
// 3
	for(i=5;i>=1;--i){
		for(j=1;j<=i;++j)
			printf("*");
		printf("\n");
	}
//4
	for(i=1;i<=5;++i){
		for(j=1;j<=(2*i-1);++j)
			printf("*");
		printf("\n");
	}

	return 0;
}
