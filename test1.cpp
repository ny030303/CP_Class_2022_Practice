#include <stdio.h>
#include "test_head.h"

int test1() {
	// ���� num1 = 0���� �ʱ�ȭ
	float num = 0;
	//�� �Է�
	printf("���� �Է�: ");
	//scanf &���� ���Ѽ� �ۼ�
	scanf("%f", &num);

	//// i�� 1�϶� num������ŭ 1�� ����
	//for (int i = 1; i <= num; i++) {
	//	// j�� 1�϶� i��ŭ 1�� ����
	//	for (int j = 1; j <= i; j++) {
	//		printf("*");
	//	}
	//	// �ٹٲٱ�
	//	printf("\n");
	//}

	// i ���� 1
	int i = 1;

	// i�� num ���� �۰ų� ������������ ����
	while (i <= num) {
		// j ���� 1
		int j = 1;
		// j�� i���� �۰ų� ������������ ����
		while (j <= i) {
			//�����
			printf("*");
			//j 1 ����
			j++;
		}
		//�ٹٲٱ�
		printf("\n");
		//i 1 ����
		i++;
	}
	return 1;
}