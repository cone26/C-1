/*
10 * 10 ������ ������ ������ �迭�� �Է¹޾� �� �迭�� �� ���� ����� ���� ����ϴ� ���α׷��� ��������.

�Է¿�
3 4
4 2 6 3
7 9 3 4
5 1 2 1 

��� ��
15
23
9
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int nums[11][11];
	
	int row;
	int column;

	printf("��� ���� ���� �Է��ϼ���.: ");
	scanf("%d %d", &column, &row);
	
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			scanf("%d", &nums[i][j]);
		}
	}
	
	for (int q = 0; q < column; q++) {
		int sum  = 0;
		for (int r = 0; r < row; r++) {
			sum += nums[q][r];
		}
		printf("%d\n", sum);
	}
}