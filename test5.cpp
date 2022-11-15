#include <stdio.h>
#include "test_head.h"

int test5() {
	// 변수 num1 = 0으로 초기화
	float num = 0;
	//값 입력
	printf("높이 입력: ");
	//scanf &변수 지켜서 작성
	scanf("%f", &num);

	// i가 0일때 num변수만큼 1씩 증가
	for (int i = 0; i < num; i++) {
		// 1 3 5 7 9 => 전부 홀수
		// 홀수 일때만 별을 찍는다
		// 0+1=1,1+2=3, 2+3=5, 3+4=7, 4+5=9, 5+6=11, 6+7=13 ...
		// => n+(n+1)
		// 높이가 늘어날 때마다 홀수만큼 별찍기
		// ex.
		// _ _ _ * _ _ _
		// _ _ * * * _ _
		// 제일 마지막 숫자가 전체 length = 7
		int len = num + (num + 1);
		// j가 len 보다 작을때까지만 실행
		for (int j = 0; j < len; j++) {
			int star_len = i + (i + 1);
			// ex.
			// _ _ * * * _ _
			// 
			// 7 - 3 = 4, 4/2 = 2, 1 과 2는 공백
			int space_count = (len - star_len) / 2;
			// j가 공백 칸수(2)보다 작거나 같을때
			if (j <= space_count) {
				printf(" ");
			}
			// j가 공백 칸수(2)+별 수(3)보다 작거나 같을때
			else if (j <= space_count + star_len) {
				printf("*");
			}
			// 나머지 뒷칸
			else {
				printf(" ");
			}
		}
		// 줄바꾸기
		printf("\n");
	}

	//// i 선언 0
	//int i = 0;
	//// i가 num 보다 작을때까지만 실행
	//while (i < num) {
	//	// j 선언 0
	//	int j = 0;
	//	// 1 3 5 7 9 => 전부 홀수
	//	// 홀수 일때만 별을 찍는다
	//	// 0+1=1,1+2=3, 2+3=5, 3+4=7, 4+5=9, 5+6=11, 6+7=13 ...
	//	// => n+(n+1)
	//	// 높이가 늘어날 때마다 홀수만큼 별찍기
	//	// ex.
	//	// _ _ _ * _ _ _
	//	// _ _ * * * _ _
	//	// 제일 마지막 숫자가 전체 length = 7
	//	int len = num + (num + 1);
	//	while (j < len) {
	//		int star_len = i + (i + 1);
	//		// ex.
	//		// _ _ * * * _ _
	//		// 
	//		// 7 - 3 = 4, 4/2 = 2, 1 과 2는 공백
	//		int space_count = (len - star_len) / 2;
	//		// j가 공백 칸수(2)보다 작거나 같을때
	//		if (j <= space_count) {
	//			printf(" ");
	//		}
	//		// j가 공백 칸수(2)+별 수(3)보다 작거나 같을때
	//		else if (j <= space_count + star_len) {
	//			printf("*");
	//		}
	//		// 나머지 뒷칸
	//		else {
	//			printf(" ");
	//		}
	//		// j 증가
	//		j++;
	//	}
	//	//줄바꾸기
	//	printf("\n");
	//	//i 1 증가
	//	i++;
	//}
	return 1;
}