#include <stdio.h>12346qwerdfb

void main() {
	int num1 = 7, num2= 3;
	printf("%d + %d=%d\n", num1, num2, num1 + num2);
	
	printf("%d * %d=%d\n", num1, num2, num1 *num2);
	printf("%d / %d=%d\n", num1, num2, num1 / num2);
	printf("%d %% %d=%d\n", num1, num2, num1 % num2);
	num1 = 3;
	num2 = 4;
	//���� �����ڸ� ���� �ʱ�ȭ
	num1 += 3;
	num2 *= 4;                        
	printf("1+=3�� ���:%d\n",num1);      //6
	printf("2+=4�� ���:%d\n",num2);      //7

	float n1 = 136.4f; 
	num1 = (int)n1 % 10;
	printf("%d", num1);
}                          