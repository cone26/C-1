/*
	���ڿ��� ������ ���� 
	char string[] = "Hello" �̷��� ������ �� �ִµ�, �� �迭�� ������ null���ڱ��� �� 6���� ũ��� �����ȴ�.
	�̰� printf�� ���� %s�� ����� �� �ִµ�, 
	%s�� �迭�� ù ��ġ(&ptr[0])�� �˷��ָ� null���ڰ� ���� �������� ������ �ڵ����� ������ش�.
*/
#include <stdio.h>

int main() {
	char strings[3][10] = { "Hello", "Ice", "Siwon" };

	// pointer array
	char* p_str[3];

	for (int i = 0; i < 3; i++) {
		p_str[i] = strings[i];
		printf("%s\n", p_str[i]);
	}
	//for (int i = 0; i < 3; i++) {
	//	printf("%s\n", strings[i]); // &strings[i][0] �� ���� �ǹ�
	//}
}