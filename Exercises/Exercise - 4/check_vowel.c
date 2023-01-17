#include <stdio.h>


int main(void)
{
    char c;
    printf("Enter a character : ");
    do
    {
        scanf("%c", &c);
    }while(!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));

    printf("Character : %c\n", c);

    return 0;
}