#include <stdio.h>


int main(void)
{
    int input, rev;

    printf("Enter an integer : ");
    scanf("%d", &input);

    rev = input % 10;
    input = input / 10;
    while (input != 0)
    {
        rev = (rev * 10) + input % 10;
        input /= 10;
    }

    printf("Reversed input = %d\n", rev);
    
    return 0;
}