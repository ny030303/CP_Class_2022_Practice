#include <stdio.h>
#include "test_head.h"

int test3() {
	// ���� num1 = 0���� �ʱ�ȭ
	float num = 0;
	//�� �Է�
	printf("���� �Է�: ");
	//scanf &���� ���Ѽ� �ۼ�
	scanf("%f", &num);

	// i�� 1�϶� num������ŭ 1�� ����
	for (int i = 1; i <= num; i++) {
		// j�� num���� �۰ų� ������������ ����
		for (int j = 1; j <= num; j++) {
			// num - i �� j ���� ũ�ų� ���� �� ����
			// ex. _ _ _ _ _** ����̶��
			// �Է°� 7(num ����)�� �� ��� ���� 2(i ����)
			// 7 - 2 = 5 => �� ���� 5�� ������ ������
			// ���� ���� ��� �� 5��°���� �����Ҷ����� ������ ��´ٴ� ��
			if (num - i >= j) {
				printf(" ");
			}
			else {
				// �������� ��
				printf("*");
			}
			
		}
		// �ٹٲٱ�
		printf("\n");
	}

	//// i ���� 1
	//int i = 1;
	//// i�� num ���� �۰ų� ������������ ����
	//while (i <= num) {
	//	// j ���� 1
	//	int j = 1;
	//	// j�� num���� �۰ų� ������������ ����
	//	while (j <= num) {
	//		// num - i �� j ���� ũ�ų� ���� �� ����
	//		// ex. _ _ _ _ _** ����̶��
	//		// �Է°� 7(num ����)�� �� ��� ���� 2(i ����)
	//		// 7 - 2 = 5 => �� ���� 5�� ������ ������
	//		// ���� ���� ��� �� 5��°���� �����Ҷ����� ������ ��´ٴ� ��
	//		if (num - i >= j) {
	//			printf(" ");
	//		}
	//		else {
	//			// �������� ��
	//			printf("*");
	//		}
	//		//j 1 ����
	//		j++;
	//	}
	//	//�ٹٲٱ�
	//	printf("\n");
	//	//i 1 ����
	//	i++;
	//}
	return 1;
}