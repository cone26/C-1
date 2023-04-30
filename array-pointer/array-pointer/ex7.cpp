#include <stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr + i)); // arr 각 자리의 주소 값에 담긴 값 (*)
	}
	printf("\n");

	for (int* ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d ", *ptr); // 위와 같은 표현이지만 다르게 표현
	}

	// 세 결과 값이 같음
}