#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	/*
	100�� ������ ������ �Է¹޾� ù �ٿ� ¦�� ��° ���ڵ��� ������� ����ϰ�,
	���� �ٿ� Ȧ�� ��° ���ڵ��� ������� ����ϴ� ���α׷��� ����� ������.

	�Է� ��
	7 <- ������ ����
	3 1 4 1 5 9 2

	��� ��
	1 1 9 <- Ȧ����° ����
	3 4 5 2 <- ¦����° ����
	*/

	int nums[100];
	int num;
	
	printf("�Է��� ������ ������ �Է��ϼ���: ");
	scanf("%d", &num);
	

	for (int i = 0; i < num; i++) {
		scanf("%d", &nums[i]);
	}

	for (int i = 0; i < num; i++) {
		if (i % 2 != 0) {
			printf("%d ", nums[i]);
		}
	}


	printf("\n");

	for (int i = 0; i < num; i++) {
		if (i % 2 == 0) {
			printf("%d ", nums[i]);
		}
	}




	printf("\n");
	// solution : print
	// �߰������� if���� �߰����� �ʾƵ� �Ǵ� ���

	for (int j = 1; j < num; j += 2) {
		printf("%d ", nums[j]);
	}

	printf("\n");

	for (int j =0; j < num; j += 2) {
		printf("%d ", nums[j]);
	}
}
