#include <stdio.h>
#include <math.h>

#define MAX 8

void decimal2bin(int[], int, int);
void display(int[], int);
int binary2dec(int[], int);
void addBinary(int[], int[], int[], int);
void subBinary(int[], int[], int[], int);
void mulBinary(int[], int[], int[], int);

int main(void)
{
    int op1, op2;
    int bin1[MAX], bin2[MAX];
    int dest[MAX];
    char choice;

    printf("Enter first integer : ");
    scanf("%d", &op1);

    printf("Enter second integer : ");
    scanf("%d", &op2);

    decimal2bin(bin1, op1, MAX);
    decimal2bin(bin2, op2, MAX);

    printf("Binary representation of first integer is : ");
    display(bin1, MAX);
    printf("\n");

    printf("Binary representation of second integer is : ");
    display(bin2, MAX);
    printf("\n");

    printf("This program can perform the following operations on binary numbers :\n");
    printf("A - ADDITION\nS - SUBTRACTION\nM - MULTIPLICATION\nEnter your choice : ");
    scanf(" %c", &choice);


    switch (choice)
    {
        case 'A':
        {
            addBinary(dest, bin1, bin2, MAX);
            printf("You chose addition. The addition of the two numbers is: ");
            display(dest, MAX);
            break;
        }

        case 'S':
        {
            subBinary(dest, bin1, bin2, MAX);
            printf("You chose subtraction. The subtraction of the two numbers is: ");
            display(dest, MAX);
            break;
        }

        case 'M':
        {
            mulBinary(dest, bin1, bin2, MAX);
            printf("You chose multiplication. The multiplication of the two numbers is: ");
            display(dest, MAX);
            break;
        }

        default:
            printf("Wrong choice!\n");
    }

//    subBinary(dest, bin1, bin2, MAX);
//    mulBinary(dest, bin1, bin2, MAX);

    return 0;
}

void decimal2bin(int bin[], int dec, int size)
{
    int i = 0, j;
    int temp[size];
    while (dec != 0)
    {
        temp[i] = dec % 2;
        dec = dec / 2;
        i++;
    }

    for (j = 0; j < size - i; j++)
    {
        bin[j] = 0;
    }

    for (int k = size - (j + 1); k >= 0, j < size; k--)
    {
        bin[j] = temp[k];
        j++;
    }
}

int binary2dec(int bin[], int size)
{
    int temp[size];
    int result = 0;
    for (int i = 0, j = size - 1; i < size, j >= 0; i++, j--)
    {
        temp[i] = bin[j];
    }

    for (int i = 0; i < size; i++)
    {
        result = result + (temp[i] * pow(2, i));
    }

    return result;
}

void addBinary(int dest[], int bin1[], int bin2[], int size)
{
    int num1 = binary2dec(bin1, size);
    int num2 = binary2dec(bin2, size);

    decimal2bin(dest, num1 + num2, size);
}

void subBinary(int dest[], int bin1[], int bin2[], int size)
{
    int num1 = binary2dec(bin1, size);
    int num2 = binary2dec(bin2, size);

    decimal2bin(dest, num1 - num2, size);
}

void mulBinary(int dest[], int bin1[], int bin2[], int size)
{
    int num1 = binary2dec(bin1, size);
    int num2 = binary2dec(bin2, size);

    decimal2bin(dest, num1 * num2, size);
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
