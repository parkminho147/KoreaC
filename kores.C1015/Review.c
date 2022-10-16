#include <stdio.h>

int main1() {
	//배열
	char a0 = 0;           //[]
	char a1;           //[]
	char a2;           //[]
	char a3;           //[]
	char a4;           //[]
	




	//aa묶음
	a1 = 0;
	a2 = 1;
	a3 = 2;
	a4 = 3;

	printf("%c \n",a1);
	printf("%c \n",a2);
	printf("%c \n",a3);
	printf("%c \n",a4);

	   int num = 10;
       int* pnum;
	   pnum = &num;//포인터 변수 pnum은 num의 주소를 저장합니다.

	   *pnum = 20;
	   printf("num:%d\n", num);
	   (*pnum)++; (*pnum)++;
	   printf("num:%d\n", num);
	   printf("*pnum:%d\n",*pnum);

	   int a = 10;
	   int* p = &a;
	   *p = 20;                      
		   printf("%d", a);
	   *p = 50;
	   printf("%d", a);

	   return 0;
}