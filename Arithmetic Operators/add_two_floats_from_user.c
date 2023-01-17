#include <stdio.h>

int main(void)
{
    float a, b, c;

    printf("Enter first number : ");
    scanf("%f", &a);

    printf("Enter second number : ");
    scanf("%f", &b);

    c = a + b;

    printf("Result : %f\n", c);
    return 0;
}