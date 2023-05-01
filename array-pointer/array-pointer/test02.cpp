/*
10 * 10 이하의 정수형 이차원 배열을 입력받아 그 배열의 각 행의 요소의 합을 출력하는 프로그램을 만들어보세요.

입력예
3 4
4 2 6 3
7 9 3 4
5 1 2 1 

출력 예
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

	printf("행과 열의 수를 입력하세요.: ");
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