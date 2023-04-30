/*
	1. ptr == &ptr[0] -> ptr의 ptr[0]의 주소를 가리키기 떄문
	2. *ptr == ptr[0] -> ptr이 가리키는 주소(ptr[0])의 값
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값 (int면 4 bytes (32 bit))
*/

#include <stdio.h>
int main() {
	int arr[3] = { 1,2,3 };

	printf("arr = %d\n", arr); // &arr[0]
	printf("arr + 1 = %d\n", arr + 1); // &arr[1]

	printf("&arr = %d\n", &arr); // arr의 주소값 == arr[0]
	printf("&arr + 1 = %d\n", &arr + 1); // &arr + arr의 크기 (4 bytes(int) * 3 == 12 bytes)

}