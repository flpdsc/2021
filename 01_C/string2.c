#include <stdio.h>

int main(void)
{

	char *str1 = "hello, world";
	printf("str1 : %s\n", str1);
//	printf("str1 : %s\n", &str1);

	char str2[] = "hello, world";
	printf("str2 : %s\n", str2);

	char *str3 = "hello, world";
	printf("str3 : %s\n", str3);

return 0;
}
