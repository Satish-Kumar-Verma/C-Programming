#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int input;
    int sum = 0;
    while (true)
    {
        printf("Enter a positive integer : ");
        scanf("%d", &input);

        if (input > 0)
        {
            sum = sum + input;
        }
        else
            break;
    }
    printf("Sum = %d\n", sum);
    return 0;
}