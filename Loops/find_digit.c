#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    long int input;
    int digit = 0;
    printf("Enter an integer : ");
    scanf("%ld", &input);

    while (input != 0)
    {
        digit = digit + 1;
        input = input / 10;
    }

    if (digit <= 1)
    {
        printf("Input has %d digit.\n", digit);
    }

    else
    {
        printf("Input has %d digits.\n", digit);
    }
    return 0;
}