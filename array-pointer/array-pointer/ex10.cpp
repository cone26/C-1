// �迭 ������ : �迭�� ����Ű�� ������ ( ������ * 1)
// ������ �迭 : �����͵��� �迭 ( ������ * n)

#include <stdio.h>
int main() {
	int arr[4] = { 1,2,3,4 };

	int* ptr[4];

	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
		printf("%d\n", *ptr[i]);
	}

	//for (int i = 0; i < 4)

}