#include <stdio.h>
#define LIMIT 100

int calculate_sum(int[], int);
void print_array(int[], int);

int main(void)
{
    int arr[LIMIT];
    int index = 0;
    int temp;
    do
    {
        printf("Enter the %d element of the array : ", index + 1);
        scanf("%d", &temp);

        if (temp > 0)
        {
            arr[index] = temp;
            index++;
        }

    } while (!(temp < 0));
    
    print_array(arr, index);

    printf("Sum : %d\n", calculate_sum(arr, index));

    return 0;
}

int calculate_sum(int a[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
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