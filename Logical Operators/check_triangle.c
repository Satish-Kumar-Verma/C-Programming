#include <stdio.h>

int main(void)
{
    int a, b, c;
    a = 5;
    b = 5;
    c = 5;
    if(a == b && b == c)
    {
        printf("Equilateral!\n");
    }
    else
    {
        if(a == b || b == c || a == c)
        {
            printf("Isosceles!\n");
        }
        else
            printf("Scalene!\n");
    }
    return 0;
}