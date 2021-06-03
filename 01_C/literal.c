#include<stdio.h>

int main(void)
{
	printf("%d %d %d\n", 100, 0144, 0x64);
	// decimal(10)
	printf("%d 0%o 0x%x\n", 100, 100, 100);
	// octal(8), hexa-decimal(16)	
	printf("%d %d %d\n", 'A', 'a', '0');
	//printf("%d %d %d\n", 65, 97, 48);
	printf("%c %c %c\n", 'A', 'a', '0');
	printf("%c %c %c\n", 'A', 'A'+1, 'A'+2);
	printf("%lldLL\n", 30000000000LL);
	printf("%f %f\n", 3.141592, 2.718F);
	printf("%s\n", "ABCD");

	return 0;
}
