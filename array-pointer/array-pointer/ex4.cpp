#include <stdio.h>

int main() {
	int a = 10;
	int* ptr;
	ptr = &a;

	int** ptr_ptr;
	ptr_ptr = &ptr;

	printf("a = %d\n", a); //10
	printf("&a = %d\n", &a); //a�� �ּ� ��
	
	printf("ptr = %d\n", ptr); // a�� �ּ� ��
	printf("&ptr = %d\n", &ptr); // ptr�� �ּ� ��

	printf("ptr_ptr = %d\n", ptr_ptr); //ptr�� �ּ� ��
	printf("*ptr_ptr = %d\n", *ptr_ptr); //ptr�� ����Ű�� �ִ� ������ �� === a�� �ּ� ��(ptr)
	printf("**ptr_ptr = %d\n", **ptr_ptr); //*(*ptr) === a
}