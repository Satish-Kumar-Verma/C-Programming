#include <stdio.h>
#define LIMIT 100

int main(void)
{
    int size;
    int arr[LIMIT];
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    arr[size] = '\0';

    printf("The elements from the array are : ");

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    return 0;
}