#include <stdio.h>

int func(int num)
{
    if (num == 1 || num == 0)
    {
        printf("%d", num);
    }
    else
    {
        func(num / 2);
        printf("%d", num % 2);
    }
    return 0;
}



int main(void)
{
    int num = 0;
    printf("Please enter a number : ");
    scanf("%d", &num);
    func(num);
    return 0;
}