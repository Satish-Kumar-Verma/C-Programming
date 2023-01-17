#include <stdio.h>

int main(void)
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("Quotient : %d \n", b / a);
    printf("Remainder : %d \n", b % a);
    return 0;
}