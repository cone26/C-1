#include <stdio.h>

int main(void)
{
	int num[5];
	int i;
	printf("5���� ������ �Է��ϼ���.: ");
	scanf_s("%d %d %d %d %d", &(num[0]), &(num[1]), &(num[2]), &(num[3]), &(num[4]));
	//Ȧ�� ���
	printf("Ȧ�� ���:");
	for (i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 1)
			printf("%d ", num[i]);
	}
	printf("\n");
	//¦�� ���
	printf("¦�� ���:");
	for (i = 0; i < 5; i++)
	{ 
		if (num[i] % 2 == 0)
			printf("%d ", num[i]);
	}
	printf("\n");


	return 0;
}