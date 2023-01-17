#include <stdio.h>
#define LIMIT 100

void print_array(int[], int);
int main(void)
{
    int arr1[LIMIT], arr2[LIMIT];
    int size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }

    print_array(arr1, size);
    print_array(arr2, size);

    return 0;
}

void print_array(int a[], int size)
{
    printf("Elements from the array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
