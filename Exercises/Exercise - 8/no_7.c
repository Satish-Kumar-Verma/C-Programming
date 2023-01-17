#include <stdio.h>
#include <stdbool.h>

#define SIZE 50
void print_array(int[], int);
int main(void)
{
    int arr[SIZE];
    int even_arr[SIZE], odd_arr[SIZE];
    int size, even_index = 0, odd_index = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("%d element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    print_array(arr, size);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_arr[even_index] = arr[i];
            even_index++;
        }

        else
        {
            odd_arr[odd_index] = arr[i];
            odd_index++;
        }
    }

    printf("EVEN :\n");
    print_array(even_arr, even_index);
    printf("ODD :\n");
    print_array(odd_arr, odd_index);
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