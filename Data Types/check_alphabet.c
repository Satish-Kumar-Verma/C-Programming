#include <stdio.h>

int main(void)
{
    char c = '!';

    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
        printf("It is an alphabet!\n");
    else
    {
        printf("It is not an alphabet!\n");
    }
    return 0;
}