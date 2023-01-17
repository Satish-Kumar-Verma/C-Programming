#include <stdio.h>


int main(void)
{
    int num;
    do
    {
        printf("Enter an integer : ");
        scanf("%d", &num);
    } while (!(num > 0));
    
    if (num == 1)
        printf("It is a not prime number.\n");

    else if (num == 2)
        printf("It is a prime number.\n");

    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                printf("It is not a prime number.\n");
                goto here;
            }
        }
        printf("It is a prime number.\n");
    }
    here:
    return 0;
}