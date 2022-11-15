#include <stdio.h>
#include "test_head.h"

int test3() {
	// 변수 num1 = 0으로 초기화
	float num = 0;
	//값 입력
	printf("높이 입력: ");
	//scanf &변수 지켜서 작성
	scanf("%f", &num);

	// i가 1일때 num변수만큼 1씩 증가
	for (int i = 1; i <= num; i++) {
		// j가 num보다 작거나 같을때까지만 실행
		for (int j = 1; j <= num; j++) {
			// num - i 가 j 보다 크거나 같을 때 공백
			// ex. _ _ _ _ _** 출력이라면
			// 입력값 7(num 변수)에 별 찍는 숫자 2(i 변수)
			// 7 - 2 = 5 => 이 말은 5번 공백을 찍어야함
			// 공백 최종 찍는 수 5번째까지 도달할때까지 공백을 찍는다는 뜻
			if (num - i >= j) {
				printf(" ");
			}
			else {
				// 나머지는 별
				printf("*");
			}
			
		}
		// 줄바꾸기
		printf("\n");
	}

	//// i 선언 1
	//int i = 1;
	//// i가 num 보다 작거나 같을때까지만 실행
	//while (i <= num) {
	//	// j 선언 1
	//	int j = 1;
	//	// j가 num보다 작거나 같을때까지만 실행
	//	while (j <= num) {
	//		// num - i 가 j 보다 크거나 같을 때 공백
	//		// ex. _ _ _ _ _** 출력이라면
	//		// 입력값 7(num 변수)에 별 찍는 숫자 2(i 변수)
	//		// 7 - 2 = 5 => 이 말은 5번 공백을 찍어야함
	//		// 공백 최종 찍는 수 5번째까지 도달할때까지 공백을 찍는다는 뜻
	//		if (num - i >= j) {
	//			printf(" ");
	//		}
	//		else {
	//			// 나머지는 별
	//			printf("*");
	//		}
	//		//j 1 증가
	//		j++;
	//	}
	//	//줄바꾸기
	//	printf("\n");
	//	//i 1 증가
	//	i++;
	//}
	return 1;
}