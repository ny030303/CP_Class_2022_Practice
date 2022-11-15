#include <stdio.h>
#include "test_head.h"

int test2() {
	// 변수 num1 = 0으로 초기화
	float num = 0;
	//값 입력
	printf("높이 입력: ");
	//scanf &변수 지켜서 작성
	scanf("%f", &num);

	// i가 1일때 num변수만큼 1씩 증가
	for (int i = num; i >= 1; i--) {
		// j가 1일때 i만큼 1씩 증가
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		// 줄바꾸기
		printf("\n");
	}

	//// i 선언 1
	//int i = num;

	//// i가 num 보다 크거나 같을때까지만 실행
	//while (i >= 1) {
	//	// j 선언 1
	//	int j = 1;
	//	// j가 i보다 작거나 같을때까지만 실행
	//	while (j <= i) {
	//		//별찍기
	//		printf("*");
	//		//j 1 증가
	//		j++;
	//	}
	//	//줄바꾸기
	//	printf("\n");
	//	//i 1 감소
	//	i--;
	//}
	return 1;
}