#include <stdio.h>

int sum(int);
int main(void)
{
    int num;
    printf("Enter a positive integer : ");
    scanf("%d", &num);

    printf("Sum = %d\n", sum(num));

    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return n;
    }
    else 
        return n + sum(n - 1);
}