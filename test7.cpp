#include <stdio.h>
#include "test_head.h"

int test7() {
	// ���� num1 = 0���� �ʱ�ȭ
	float num = 0;
	//�� �Է�
	printf("���� �Է�: ");
	//scanf &���� ���Ѽ� �ۼ�
	scanf("%f", &num);

	// �� �Ƕ�̵�
	for (int i = 0; i < num; i++) {
		int len = num + (num + 1);
		for (int j = 0; j < len; j++) {
			int star_len = i + (i + 1);
			int space_count = (len - star_len) / 2;

			if (j <= space_count) printf(" ");
			else if (j <= space_count + star_len) printf("*");
			else printf(" ");
		}
		// �ٹٲٱ�
		printf("\n");
	}

	// �Ʒ� �Ƕ�̵�
	 //i ���� -1 �ؼ� ���� �����
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

	//// �� �Ƕ�̵�
	//// i ����
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
	//// �Ʒ� �Ƕ�̵�
	//// i ���� -1 �ؼ� ���� �����
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