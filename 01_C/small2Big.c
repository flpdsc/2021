#include <stdio.h>

int main(void)
{
	char ch;
	scanf("%c", &ch);
	
	if (ch >= 'a' && ch <= 'z'){
		ch = ch - 'a' + 'A';
	}

	printf("ch : %c\n", ch);
	return 0;
}
