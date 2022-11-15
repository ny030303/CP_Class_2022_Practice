#include <stdio.h>
#include "test_head.h"

int test7() {
	// 변수 num1 = 0으로 초기화
	float num = 0;
	//값 입력
	printf("높이 입력: ");
	//scanf &변수 지켜서 작성
	scanf("%f", &num);

	// 위 피라미드
	for (int i = 0; i < num; i++) {
		int len = num + (num + 1);
		for (int j = 0; j < len; j++) {
			int star_len = i + (i + 1);
			int space_count = (len - star_len) / 2;

			if (j <= space_count) printf(" ");
			else if (j <= space_count + star_len) printf("*");
			else printf(" ");
		}
		// 줄바꾸기
		printf("\n");
	}

	// 아래 피라미드
	 //i 값을 -1 해서 한줄 지우기
	for (int i = num-2; i >= 0; i--) {
		int len = num + (num + 1);
		for (int j = 0; j < len; j++) {
			int star_len = i + (i + 1);
			int space_count = (len - star_len) / 2;

			if (j <= space_count) printf(" ");
			else if (j <= space_count + star_len) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	//// 위 피라미드
	//// i 선언
	//int i = 0;
	//while (i < num) {
	//	int j = 0;
	//	int len = num + (num + 1);
	//	while (j < len) {
	//		int star_len = i + (i + 1);
	//		int space_count = (len - star_len) / 2;
	//		if (j <= space_count) printf(" ");
	//		else if (j <= space_count + star_len) printf("*");
	//		else printf(" ");
	//		j++;
	//	}
	//	printf("\n");
	//	i++;
	//}
	//// 아래 피라미드
	//// i 값을 -1 해서 한줄 지우기
	//i = num - 2;

	//while (i >= 0) {
	//	int j = 0;
	//	int len = num + (num + 1);

	//	while (j < len) {
	//		int star_len = i + (i + 1);
	//		int space_count = (len - star_len) / 2;

	//		if (j <= space_count) printf(" ");
	//		else if (j <= space_count + star_len) printf("*");

	//		else printf(" ");
	//		j++;
	//	}
	//	printf("\n");
	//	i--;
	//}
	return 1;
}