#include <stdio.h>

int main() {
	int a = 10;
	int* ptr_a = &a;

	printf("ptr_a�� �� : %d\n", ptr_a);
	printf("ptr_a + 1�� �� : %d\n", ptr_a + 1); // ptr_a�� +4�� �� ��
	
	/*
	ptr_a�� int�� -> int�� ũ��� 4bytes
	=> �ּҿ� +1�� �ϸ� �� type�� ũ�⸸ŭ ��������.
	*/
}