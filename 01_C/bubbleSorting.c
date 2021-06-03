#include <stdio.h>

int main(void)
{
	int nums[]={50,40,10,100,30,20,60,70,80,90};

	for ( int i = 10 - 1 ; i > 0 ; --i ) {
		for(int j = 0; j < i ; ++j ) {
			if(nums[j] > nums[j+1]) {
				int tmp=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=tmp;
			}
		}	
	
	}

	
	for (int i = 0 ; i < 10 ; ++i){
		printf("%d%c", nums[i], (i < 9)? ' ' :'\n');
	}


	return 0;
}
