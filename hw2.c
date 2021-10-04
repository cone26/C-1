#include <stdio.h>

int main(void) 
{
    float kilo,miles;
   
    printf("Please enter kilometers: ");
    scanf("%f", &kilo);
    miles = kilo * 0.621;
    printf("%.1f km is equal to %.1f miles. \n", kilo, miles);
}