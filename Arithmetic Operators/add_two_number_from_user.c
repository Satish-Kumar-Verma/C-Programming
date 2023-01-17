#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the first integer : ");
    scanf("%d", &a);

    printf("Enter the second integer : ");
    scanf("%d", &b);

    c = a + b;

    printf("Result : %d\n", c);

    return 0;
}