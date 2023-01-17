#include <stdio.h>

int main(void)
{
    char a;
    printf("Enter a character : ");
    scanf("%c", &a);

    printf("The character : %c\n", a);
    printf("The ASCII code of the character : %d\n", a);
    return 0;
}