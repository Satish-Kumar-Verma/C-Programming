#include <stdio.h>
#define SIZE 50

int take_input(char [], char []);
void encrypt(char [], char [], char [], int);
void decrypt(char [], char [], char [], int);
void print_array(char [], int, int);

int main(void)
{
    char plain_text[SIZE], key[SIZE], cipher_text[SIZE], message[SIZE];
    int size;

    size = take_input(message, key);

    encrypt(message, key, cipher_text, size);

    print_array(cipher_text, size, 1);

    decrypt(cipher_text, key, plain_text, size);

    print_array(plain_text, size, 0);

    
    return 0;
}

int take_input(char mess[], char key[])
{
    char temp;
    int index = 0;
    printf("Enter the message : ");
    do 
    {
        scanf("%c", &temp);

        if (temp != '0')
        {
            mess[index] = temp;
            index++;
        }
    }while(!(temp == '0'));

    index = 0;

    printf("\nEnter the key : ");
    do 
    {
        scanf(" %c", &temp);
        if (temp != '0')
        {
            key[index] = temp;
            index++;
        }
    }while(!(temp == '0'));
    
    return index;
}

void encrypt(char mess[],char key[], char cipher[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cipher[i] = mess[i] + key[i];
    }
}

void decrypt(char cipher[], char key[], char plain_text[], int size)
{
    for (int i = 0; i < size; i++)
    {
        plain_text[i] = cipher[i] - key[i];
    }
}

void print_array(char arr[], int size, int flag)
{
    if (flag == 1)
    {
        printf("Cipher Text : ");
        for (int i = 0; i < size; i++)
        {
            printf("%c", arr[i]);
        }
        printf("\n");
    }
    else if(flag == 0)
    {
        printf("Plain Text : ");
        for (int i = 0; i < size; i++)
        {
            printf("%c", arr[i]);
        }
        printf("\n");
    }

    else
        printf("Wrong flag!\n");
}