#include <stdio.h>
#define LIMIT 100

void print_array(int[], int);
int main(void)
{
    int arr[LIMIT];
    int n;
    printf("How many elements do you want in the array : ");
    scanf("%d", &n);

    for (int index = 0; index < n; index++)
    {
        printf("%d element of the array : ", index + 1);
        scanf("%d", &arr[index]);
    }

    print_array(arr, n);

    printf("Printing the array in the reverse order...\n");

    printf("In reverse order : ");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    return 0;
}

void print_array(int arr[], int size)
{
    printf("Elements from the array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}