#include <stdio.h>
#define SIZE 50


void print_array(int[], int);
int main(void)
{

    int arr[SIZE];
    int size, min;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("%d element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Before sorting : \n");
    print_array(arr, size);

    printf("After sorting : \n");
    for (int i = 0; i < size - 1; i++)
    {
        min = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                arr[j] = arr[i];
                arr[i] = min; 
            }
        }
    }

    print_array(arr, size);

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