#include <stdio.h>

long int factorial(long int);
int main(void) 
{
    long int num = 12; // 0! = 1, 1! = 1, 2! = 2, 3! = 6, 
    // n! = n * (n - 1)!
    printf("Factorial of %ld is : %ld \n", num, factorial(num));

    return 0;
}

long int factorial(long int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    else 
    {
        return num * factorial(num - 1);
    }
}