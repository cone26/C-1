/*
	문자열을 선언할 떄는 
	char string[] = "Hello" 이렇게 선언할 수 있는데, 이 배열은 마지막 null문자까지 총 6개의 크기로 구성된다.
	이걸 printf할 때는 %s를 사용할 수 있는데, 
	%s는 배열의 첫 위치(&ptr[0])만 알려주면 null문자가 나올 때까지의 값들을 자동으로 출력해준다.
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
	//	printf("%s\n", strings[i]); // &strings[i][0] 과 같은 의미
	//}
}