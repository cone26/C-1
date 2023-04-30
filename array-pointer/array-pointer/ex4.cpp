#include <stdio.h>

int main() {
	int a = 10;
	int* ptr;
	ptr = &a;

	int** ptr_ptr;
	ptr_ptr = &ptr;

	printf("a = %d\n", a); //10
	printf("&a = %d\n", &a); //a의 주소 값
	
	printf("ptr = %d\n", ptr); // a의 주소 값
	printf("&ptr = %d\n", &ptr); // ptr의 주소 값

	printf("ptr_ptr = %d\n", ptr_ptr); //ptr의 주소 값
	printf("*ptr_ptr = %d\n", *ptr_ptr); //ptr이 가리키고 있는 변수의 값 === a의 주소 값(ptr)
	printf("**ptr_ptr = %d\n", **ptr_ptr); //*(*ptr) === a
}