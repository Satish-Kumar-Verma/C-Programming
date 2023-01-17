#include <stdio.h>

int main(void)
{
    int a, b, c;
    a = 10;
    b = 15;
    c = 20;

    if(a == b && a == c)
    {
        printf("All the numbers are equal!\n");
    }
    else
    {
        if(a > b && a > c)
        {
            printf("A is the greatest number!\n");
        }
        else if(a < b && b > c)
        {
            printf("B is the greatest number!\n");
        }
        else if(a < b && b < c)
        {
            printf("C is the greatest number!\n");
        }
    }
    return 0;
}