#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1 = "hello, world";

	int len = strlen(str1);
	printf("Len : %d\n", len);
	
	char str2[20];
	strcpy(str2, str1);
	printf("str2 : %s\n", str2);

	//if (str1 == str2) ==> 주솟값 비교
	if (strcmp(str1, str2) == 0)
		printf("str1 and str2 are equal\n");
	else
		printf("str1 and str2 are unequal\n");

	strcat(str2, " ");	//concatination
	strcat(str2, "ABCD");
//	strcat(str2, "EFGHIJKLMNOP");	

	printf("str2(strcat) : %s\n", str2);

	return 0;
}
