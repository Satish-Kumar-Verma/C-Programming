#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char b;
    char upper;
    char lower;
    printf("Enter a character in lower case : ");
    scanf("%c", &b);


    // upper = (b - 'a') + 65;

    // printf("ASCII code : %d\n", b); 
    // printf("Uppercase : %c\n", upper);

    // lower = (upper - 'A') + 97;
    // printf("Lowercase : %c\n", lower);

    upper = toupper(b);
    printf("b = %c\n", b);
    lower = tolower(upper);

    printf("Uppercase : %c\nLowercase : %c\n", upper, lower);
    return 0;
}