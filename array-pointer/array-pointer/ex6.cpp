#include <stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n", i, &arr[i]); // array�� �����ϸ� ���� memory�󿡼��� �ּҰ� �پ �Ҵ�Ǵ� ���� �� �� �ִ�.

		printf("arr + %d = %d\n", i, arr + i); 
		/*
		arr == &arr[0] => true
		arr + 1 == &arr[0] + 1 == &arr[1]
		*/
	}
}