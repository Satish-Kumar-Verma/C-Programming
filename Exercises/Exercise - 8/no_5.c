#include <stdio.h>
#include <stdbool.h>

#define SIZE 50
bool check_presence(int[], int, int);
int find_frequency(int[], int, int);
void print_array(int[], int);
int main(void)
{
    int arr[SIZE], unique[SIZE], frequency[SIZE];
    int size, index = 0;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("%d element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (!check_presence(unique, index, arr[i]))
        {
            unique[index] = arr[i];
            index++;
        }
    }

    for (int i = 0; i < index; i++)
    {
        frequency[i] = find_frequency(arr, size, unique[i]);
    }

    print_array(arr, size);

    for (int i = 0; i < index; i++)
    {
        printf("%d occoured %d times.\n", unique[i], frequency[i]);
    }


    return 0;
}

bool check_presence(int arr1[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if(num == arr1[i])
            return true;
    }
    return false;
}

int find_frequency(int arr2[], int size, int num)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (num == arr2[i])
        {
            count++;
        }
    }
    return count;
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
