#include <stdio.h>

int take_input(char[], int);
void encrypt(char[], int, int);
void decrypt(char[], int, int);
void print_message(char[], int, int);

#define SIZE 50

int main(void)
{
    int decision;
    int key;
    int size;
    char temp;
    char input_[SIZE];
    printf("Encrypt : 1, Decrypt : 0 : ");
    scanf("%d", &decision);

    size = take_input(input_, decision);
    printf("Enter the key :");
    scanf("%d", &key);

    if (decision == 1)
    {
        encrypt(input_, size, key);
        print_message(input_, size, decision);
    }
    
    else
    {
        decrypt(input_, size, key);
        print_message(input_, size, decision);
    }
    return 0;
}

int take_input(char input_[], int flag)
{ 
    char temp;
    int index = 0;

    if(flag == 1)
    {
        printf("Enter the message to encrypt :");
    }
    else
        printf("Enter the message to decrypt :");

    do
    {
        scanf("%c", &temp);

        if(temp != '$')
        {
           input_[index] = temp;
            index++;
        }
    }while(!(temp == '$'));
    return index;
}

void encrypt(char input_[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        input_[i] = input_[i] + key;
    }
}

void decrypt(char input_[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        input_[i] = input_[i] - key;
    }
}

void print_message(char arr[], int size, int flag)
{
    if (flag == 1)
    {
        printf("Encrypted message is : \n");
        for (int i = 0; i < size; i++)
        {
            printf("%c", arr[i]);
        }
    }
    else
    {
        printf("Decrypted message is : \n");
        for (int i = 0; i < size; i++)
        {
            printf("%c", arr[i]);
        }
    }
    printf("\n");
}