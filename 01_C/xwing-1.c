#include <stdio.h>

int main(void)
{

	for (int i = 1 ; i <= 5 ; ++i) {
		for (int j = 1 ; j <= 5 ; ++j)
			printf("%s", (i==j || j==6-i)?"*":" ");
		printf("\n");
	}

	return 0;
}
