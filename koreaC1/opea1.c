#include <stdio.h>12346qwerdfb

void main() {
	int num1 = 7, num2= 3;
	printf("%d + %d=%d\n", num1, num2, num1 + num2);
	
	printf("%d * %d=%d\n", num1, num2, num1 *num2);
	printf("%d / %d=%d\n", num1, num2, num1 / num2);
	printf("%d %% %d=%d\n", num1, num2, num1 % num2);
	num1 = 3;
	num2 = 4;
	//북합 연사자를 통한 초기화
	num1 += 3;
	num2 *= 4;                        
	printf("1+=3의 결과:%d\n",num1);      //6
	printf("2+=4의 결과:%d\n",num2);      //7

	float n1 = 136.4f; 
	num1 = (int)n1 % 10;
	printf("%d", num1);
}                          