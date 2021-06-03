#include <stdio.h>

void printStringArray1(char (*arr)[20], int size)
{
	for (int i = 0; i < size; ++i)
			printf("%s\t", &arr[i][0]);	//&arr[i][0] == arr[i]
}
void printStringArray2(char **arr, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%s\t", arr[i]);	//arr[i] == &arr[i][0]
}

int main(void)
{
	char cities1[5][20] = {
		"Seoul", "LA", "Paris", "Rio de janeiro", "Rome"
	};

	char *cities2[5] = {
		"Seoul", "LA", "Paris", "Rio de janeiro", "Rome"
	};

	printStringArray1(cities1, 5);
	printf("\n");
	printStringArray2(cities2, 5);
	printf("\n");

	return 0;
}
