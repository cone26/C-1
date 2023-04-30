/*
	1. ptr == &ptr[0] -> ptr�� ptr[0]�� �ּҸ� ����Ű�� ����
	2. *ptr == ptr[0] -> ptr�� ����Ű�� �ּ�(ptr[0])�� ��
	3. ptr + 1 == ptr�� sizeof(*ptr)�� ���� �� (int�� 4 bytes (32 bit))
*/

#include <stdio.h>
int main() {
	int arr[3] = { 1,2,3 };

	printf("arr = %d\n", arr); // &arr[0]
	printf("arr + 1 = %d\n", arr + 1); // &arr[1]

	printf("&arr = %d\n", &arr); // arr�� �ּҰ� == arr[0]
	printf("&arr + 1 = %d\n", &arr + 1); // &arr + arr�� ũ�� (4 bytes(int) * 3 == 12 bytes)

}