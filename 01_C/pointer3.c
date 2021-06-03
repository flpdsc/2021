#include <stdio.h>

int main(void)
{
	int a = 0x12345678;
//	int *p;
	char *p;
//	p = &a;
	p = (char *)&a;

	printf("*P : 0x%x\n", *p);

	return 0;
}
