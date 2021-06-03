#include <stdio.h>

int main(void)
{
	char ch;
	int isAlphabet;
	
	scanf("%c", &ch);
	isAlphabet = (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'); 
	printf("%c is an alphabet : %d\n", ch, isAlphabet);

	return 0;
}
