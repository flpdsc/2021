#include <stdio.h>
#define BOLD		(0x01 << 0)
#define ITALIC	(0x01 << 1)
#define SHADOW	(0x01 << 2)
#define UL		(0x01 << 3) //매크로 상수
/* #define ITALIC	0x02
	#define SHADOW	0x04
	#define UL		0x08 */	
//상수식은 컴파일 시간에 계산되기 때문에 가독성 좋은 것으로 쓰면 됨 (실행시간에 계산되는 것 아님)
 
int main(void)
{
/*	char isBold, isItalic, isShadow, isUnder;
	isBold = 1;
	isItalic = 1; */
	
	unsigned char attr;
	attr = attr ^ attr;	//attr = 0; (XOR (비교))
	attr = attr | BOLD;	//bold 추가
	attr = attr | ITALIC + SHADOW;		// italic, shadow 추가
//	attr = attr | ITALIC | SHADOW;
	attr = attr & ~(BOLD);	//bold 취소

	printf("attr : 0x%02x\n", attr);
	
	return 0;

}
