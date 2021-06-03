#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	if(num1 == num2 || num2 == num3 || num3 == num1) printf("Error! input different values\n"); //중복값 입력 시 에러 출력

	else if(num1 > num2){
		if(num3 > num1) printf("Max : %d\nMid : %d\nMin : %d\n", num3, num1, num2);
		else if(num3 < num2) printf("Max : %d\nMid : %d\nMin : %d\n", num1, num2, num3);
		else printf("Max : %d\nMid : %d\nMin : %d\n", num1, num3, num2);
	}
	
	else if(num1 < num2){
		if(num3 > num2) printf("Max : %d\nMid : %d\nMin : %d\n", num3, num2, num1);
		else if(num3 < num1) printf("Max : %d\nMid : %d\nMin : %d\n", num2, num1, num3);
		else printf("Max : %d\nMid : %d\nMin : %d\n", num2, num3, num1);
	}

	return 0;
}
