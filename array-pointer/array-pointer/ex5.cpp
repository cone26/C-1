#include <stdio.h>

int main() {
	int a = 10;
	int* ptr_a = &a;

	printf("ptr_a의 값 : %d\n", ptr_a);
	printf("ptr_a + 1의 값 : %d\n", ptr_a + 1); // ptr_a에 +4를 한 값
	
	/*
	ptr_a는 int형 -> int의 크기는 4bytes
	=> 주소에 +1을 하면 그 type의 크기만큼 더해진다.
	*/
}