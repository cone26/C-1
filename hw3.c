#include <stdio.h>

int main(void)
{
	int num;
	int i = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	for (i = 2; i < num; i++) {
		if(num % i != 0)
			printf("It is  a prime number. \n");
		else 
			printf("It is not a prime number. \n");
		break;
	}
	
}