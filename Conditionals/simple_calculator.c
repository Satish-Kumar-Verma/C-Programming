#include <stdio.h>

int main(void)
{
    int num1, num2;
    char operator;
    printf("Choose any operator [+, -, *, /] : ");
    scanf("%c", &operator);

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    switch (operator)
    {
        case '+':
        {
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        }

        case '-':
        {
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        }

        case '*':
        {
            printf("%d x %d = %d\n", num1, num2, num1 * num2);
            break;
        }

        case '/':
        {
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / (float)num2);
            break;
        }

        default:
        {
            printf("Invalid operator!\n");
            break;
        }
    }

    return 0;
}