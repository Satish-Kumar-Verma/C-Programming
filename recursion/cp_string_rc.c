#include <stdio.h>
#include <cs50.h>
#include <string.h>

char copy(string, char[], int);
int main(void)
{
    string str1 = get_string("Enter the text : ");
    char str2[strlen(str1)];

    copy(str1, str2, 0);


    puts(str2);



    return 0;
}

char copy(string str1, char str2[], int index)
{
    if (str1[index] == '\0')
    {
        str2[index] = '\0';
        return '\0';
    }

    else 
    {
        str2[index] = str1[index];
        index++;
        return copy(str1, str2, index);
    }

}

