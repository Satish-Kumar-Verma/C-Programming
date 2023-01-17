#include <stdio.h>
#define SIZE 50

int find_max(int[], int);
int find_min(int[], int);
void print_array(int[], int);

int main(void)
{
    int arr[SIZE];
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("%d element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }

    print_array(arr, size);
    printf("Max : %d\n", find_max(arr, size));
    printf("Min : %d\n", find_min(arr, size));
    return 0;
}

int find_max(int arr1[], int size)
{
    int max = arr1[0];
    for (int i = 1; i < size; i++)
    {
        if (arr1[i] > max)
        {
            max = arr1[i];
        }
    }
    return max;
}

int find_min(int arr1[], int size)
{
    int min = arr1[0];
    for (int i = 1; i < size; i++)
    {
        if (arr1[i] < min)
        {
            min = arr1[i];
        }
    }
    return min;
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
