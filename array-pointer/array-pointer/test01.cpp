#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	/*
	100개 이하의 정수를 입력받아 첫 줄에 짝수 번째 숫자들을 순서대로 출력하고,
	다음 줄에 홀수 번째 숫자들을 순서대로 출력하는 프로그램을 만들어 보세요.

	입력 예
	7 <- 숫자의 갯수
	3 1 4 1 5 9 2

	출력 예
	1 1 9 <- 홀수번째 숫자
	3 4 5 2 <- 짝수번째 숫자
	*/

	int nums[100];
	int num;
	
	printf("입력할 숫자의 갯수를 입력하세요: ");
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
	// 추가적으로 if문을 추가하지 않아도 되는 방법

	for (int j = 1; j < num; j += 2) {
		printf("%d ", nums[j]);
	}

	printf("\n");

	for (int j =0; j < num; j += 2) {
		printf("%d ", nums[j]);
	}
}
