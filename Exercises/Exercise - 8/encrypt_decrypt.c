#include <stdio.h>

#define SIZE 50

void encrypt(char[], char[], int, char);
void decrypt(char[], char[], int, char);
void print_array(char[], int, int);
int main(void)
{
    char plain_text[SIZE];
    char encrypted_text[SIZE];
    char decrypted_text[SIZE];
    int index = 0;
    char key;
    char temp;

    printf("Enter the key : ");
    scanf("%c", &key);
    
    printf("Enter the plain text : ");
    do 
    {
        scanf("%c", &temp);

        if (temp != '$')
        {
            plain_text[index] = temp;
            index++;
        }
    }while(!(temp == '$'));

    



    encrypt(plain_text, encrypted_text, index, key);
    decrypt(encrypted_text, decrypted_text, index, key);
    
    return 0;
}

void encrypt(char arr1[], char encrypted_text[], int size, char key)
{
    for (int i = 0; i < size; i++)
    {
        encrypted_text[i] = arr1[i] + key;
    }
    print_array(encrypted_text, size, 1);
}

void decrypt(char arr2[], char decrypted_text[], int size, char key)
{
    for (int i = 0; i < size; i++)
    {
        decrypted_text[i] = arr2[i] - key;
    }
    print_array(decrypted_text, size, 0);
}


void print_array(char arr[], int size, int flag)
{
    if (flag == 0)
    {
        printf("Printing the plain text : ");
        for (int i = 0; i < size; i++)
        {
            printf("%c", arr[i]);
        }
        printf("\n");
    }

    else 
    {
        printf("Printing the encrypted text :");
        for (int i = 0; i < size; i++)
        {
            printf("%c", arr[i]);
        }
        printf("\n");
    }
}