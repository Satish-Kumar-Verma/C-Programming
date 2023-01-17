#include <stdio.h>
#include <string.h>

#define SIZE 20

int main(void)
{
    char str1[SIZE];
    char str2[SIZE];
    char str3[SIZE];
    char temp;
    int index = 0;
    printf("Enter a string : ");
    do 
    {
        scanf("%c", &temp);
        if (temp != '$')
        {
            str1[index] = temp;
            index++;
        }
    }while(!(temp == '$'));

    str1[index] = '\0';

    puts(str1);
    printf("Size of string is : %ld \n", strlen(str1));

    printf("Copying str1 into str2 :\n");
    strcpy(str2, str1);
    puts(str2);

    printf("%d\n", strcmp(str1, str2));
    
    printf("Cutting str2 into str3 : \n");
    strcat(str3, str2);

    printf("Printing str2 :\n");
    puts(str2);

    printf("Printing str3 :\n");
    puts(str3);

    strcat(str3, str2);
    puts(str3);
    puts(str2);

    strcat(str3, str2);
    puts(str3);
    puts(str2);
    

    return 0;
}