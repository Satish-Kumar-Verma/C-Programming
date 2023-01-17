#include <stdio.h>
#define SIZE 50

void print_array(char[], int);
int main(void)
{
    char plain_text[SIZE], cipher_text[SIZE];
    int index = 0, key;
    char temp;
    printf("Enter the plain text : ");
    do
    {
        scanf("%c", &temp);
        if (temp != '@')
        {
            plain_text[index] = temp;
            index++;
        }
    } while (!(temp == '@'));
    
    printf("Enter the key to encrypt the message : ");
    scanf("%d", &key);

    for (int i = 0; i < index; i++)
    {
        cipher_text[i] = plain_text[i] + key;
    }

    printf("Plain text : ");
    print_array(plain_text, index);
    printf("Cipher text : ");
    print_array(cipher_text, index);

    return 0;
}

void print_array(char arr[], int size)
{
    //printf("Elements from the array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");   
}