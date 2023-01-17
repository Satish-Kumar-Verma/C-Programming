#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main(void)
{
    string input = get_string("Enter the text in lowercase : ");
    int size = strlen(input);
    for (int i = 0; i < size; i++)
    {
        input[i] = toupper(input[i]);
    }

    puts(input);
    printf("%c\n", tolower(input[0]));
    return 0;
}