#include <stdio.h>
int main() {
	int a = 20;

	int* ptr_a;
	// & => address
	ptr_a = &a;

	//printf("%d\n", ptr_a);
	printf("a�� �� : %d\n", a);
	printf("a�� �ּ� �� : %d\n", &a);
	printf("ptr_a�� ����� �� : %d\n", ptr_a);
	printf("ptr_a�� ����Ű�� ������ �� : %d\n", *ptr_a); // == a

}