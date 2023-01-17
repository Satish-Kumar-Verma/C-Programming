#include <stdio.h>
#include <stdbool.h>
#define SIZE 100

bool check_unique(int[], int, int, int);
void print_array(int[], int);
int main(void)
{
    int arr1[SIZE], arr2[SIZE];
    int size, index = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("%d element of the array : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < size; i++)
    {
        if (check_unique(arr1, i, arr1[i], size))
        {
            arr2[index] = arr1[i];
            index++;
        }
    }
    

    print_array(arr1, size);

    print_array(arr2, index);
    return 0;
}

bool check_unique(int arr[], int index_to_skip, int num, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num && i != index_to_skip)
            return false;
    }
    return true;
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