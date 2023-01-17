#include <stdio.h>

int main(void)
{
    int a, b, c;
    a = 30;
    b = 30;
    c = 110;

    if(a + b > c && b + c > a && a + c > b)
    {
        printf("Valid!\n");
    }
    else
        printf("Invalid\n");

    return 0;
}