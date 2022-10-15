#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	

	//4.반복문
	//int 숫자3 = 0;
	//while (숫자3 != 3) {
	//    //()내용이 틀릴때까지 계속 실행
	//	printf("숫자3은 3이 아닙니다.[%d]\n", 숫자3);
	//	숫자3++;
	//}
	//5, 입력과 출력

	/*
	무한반복으로 숫자를 

	대신,입력숫자가0일 경우 반복을 종료

	입력값 ; 1
	프로그램 종료
	*/

	//int num;

	//while (1)
	//{
	//	printf("-1입력시 종료 : ");
	//	scanf("%d", &num);
	//	if (num == -1)
	//		break;
	//}

	//int num;

	//for(num=1; num<= 5;num++)
	//{
	//	if (num == 3)
	//		continue; //num의 값이 3이면 반복문의 처음으로 돌아갑니다.
	//	printf("%d\n", num);
	//}
		 //길이 정보가 포함된 배열의 선언 및 초기화
	  //   int numbers[3] = { 1,2,3 };

		 //길이 정보가 포함되지 않은 배열의 선언 및 초기화
		 //char characters[] = { 'a','b','c','d','e' };

		 //int i;
		 //int odd[3];//초기화되지 않은 배열
		 //int even[5] = { 2,4,6,8,10 };

		 //배열의 개별 요소 초기화
		 //odd[0] = 1;
		 //odd[1] = 3;
		 //odd[2] = 5;

		 //개별 요소 접근 및 출력
		 //printf("%d %d %d\n", odd[0], odd[1], odd[2]);

		 //for문을 통한 배열 요소 출력
		 //for (i = 0; i < 5; i++)
		 //{
			// printf("%d ", even[i]);
		 //}
		 //printf("\n");

		 char greet[] = "HELLO,GUYS!";
		 printf("1차원 배결 greet의 길이는: '%zd' \n",sizeof(greet));

	     return 0;
          }