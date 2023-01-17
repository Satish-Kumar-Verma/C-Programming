#include <stdio.h>
#include <stdbool.h>
#define LIMIT 100

bool check_dup(int[], int, int);
void print_array(int[], int);
int main(void)
{
    int arr[LIMIT];
    int dup_arr[LIMIT];
    int index = 0;
    int size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                if (check_dup(dup_arr, arr[i], index) == false)
                {
                    dup_arr[index] = arr[i];
                    index++;
                }
            }
        }
    }
    print_array(arr, size);
    print_array(dup_arr, index);
    printf("There are %d duplicate elements in the array!\n", index);
    return 0;
}

bool check_dup(int arr1[], int num, int size)
{
    if (size == 0)
        return false;

    else
    {
        for (int i = 0; i < size; i++)
        {
            if (num == arr1[i])
                return true;
        }
    }
    return false;
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