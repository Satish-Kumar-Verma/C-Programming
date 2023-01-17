#include <stdio.h>


int main(void)
{
    int base, pow;
    int result = 1;
    printf("Enter two integers (base , power) seperated by a space :");
    scanf("%d %d", &base, &pow);

    for(int i = 1; i <= pow; i++)
    {
        result = result * base;
    }

    printf("%d power %d = %d\n", base, pow, result);
    return 0;
}