#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a, b, counter = 0;
    bool is_prime = true;
    printf("Enter two integers (a, b) : ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j <= i / 2; j++)
        {
            if (i == 1)
            {
                break;
            }
            if (i == 2)
            {
                break;
            }
            else if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime && i != 1)
        {
            printf("%d ", i);
            counter++;
        }
        else
        {
            is_prime = true;
        }
    }
    printf("\n");
    printf("There are %d prime numbers between %d and %d.\n", counter, a, b);

    return 0;
}