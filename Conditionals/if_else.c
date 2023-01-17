#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two integers seperated by a space : ");
    scanf("%d %d", &a, &b);

    if(a > b)
    {
        printf("A is greater than B.\n");
    }

    else if(b > a)
    {
        printf("B is greater than A.\n");
    }

    else
    {
        printf("A and B are equal.\n");
    }
    
    return 0;
}