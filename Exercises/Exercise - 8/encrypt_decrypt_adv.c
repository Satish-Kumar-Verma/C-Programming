#include <stdio.h>
#define SIZE 50
int take_input(char[], int);
void encrypt(char[], int, int);
void decrypt(char[], int, int);
void print_message(char[], int, int);

int main(void)
{
    int decision;
    int key;
    int size;
    char input_[SIZE];
    printf("What do you want to do? [Encrypt : 1, Decrypt : 0] : ");
    scanf("%d", &decision);

    size = take_input(input_, decision);

    printf("Enter the key : ");
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

int take_input(char arr[], int flag)
{
    char temp;
    int index = 0;
    if (flag == 1)
    {
        printf("Enter the message to encrypt ending with $ : ");
    }
    else
        printf("Enter the message to decrypt ending with $ : ");
    do
    {
        scanf("%c", &temp);

        if (temp != '$')
        {
            arr[index] = temp;
            index++;
        }
    } while (!(temp == '$'));
    return index;
}

void encrypt(char arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + key;
    }
}

void decrypt(char arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] - key;
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