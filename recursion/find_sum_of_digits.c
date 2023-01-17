#include <stdio.h>

int find_sum_of_digits(int);
int main(void)
{
    int num = 8888; //7+7+2+8
    // num % 10
    // num / 10
    // num % 10
    printf("sum = %d\n", find_sum_of_digits(num));


    return 0;
}

int find_sum_of_digits(int num)
{
    if (num > 0)
    {
        return (num % 10) + find_sum_of_digits(num / 10);
    }
}