#include <stdio.h>
#include <stdbool.h>

bool check_prime(int);

int main(void)
{
    int num;
    printf("Enter an Integer : ");
    scanf("%d", &num);
    if (check_prime(num))
    {
        printf("It is prime number.\n");
    }
    else
        printf("It is not prime number.\n");

    return 0;
}

bool check_prime(int n)
{
    if (n == 1)
        return false;

    else if(n == 2)
        return true;

    else
    {
        for(int i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
                return false;
        }
    }
    return true;
}