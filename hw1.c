#include <stdio.h>

int main(void) {
	int result1;
	int result2;
	int result3;
	int num1;
	int num2;
	
	//정수 입력
	printf("첫번째 정수: ");
	scanf("%d", &num1);
	printf("두번째 정수: ");
	scanf("%d", &num2);

	//결과값 출력
	result1 = num1 & num2;
	printf("%d & %d = %d \n", num1, num2 ,result1);
	result2 = num1 | num2;
	printf("%d | %d = %d \n", num1, num2, result2);
	result3 = num1 ^ num2;
	printf("%d ^ %d = %d \n", num1, num2, result3);
}