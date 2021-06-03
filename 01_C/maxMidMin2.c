#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	
	int max, mid, min;
	if(num1>num3 && num1>num2) {
		max=num1;
		if(num2>num3){
			mid=num2;
			min=num3;
		} else {
			mid=num3;
			min=num2;
		}
	} else if(num2>num3 && num2>num1) {
		max=num2;
		if(num1>num3){
			mid=num1;
			min=num3;
		} else {
			mid=num3;
			min=num1;
		}
	} else {
		max=num3;
		if(num1>num2){
			mid=num1;
			min=num2;
		} else {
			mid=num2;
			min=num1;
		}
	}
	
	printf("Max : %d\nMid : %d\nMin : %d\n", max, mid, min);
	return 0;
}
