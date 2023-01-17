#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;
    int sum = 0;

    ptr = (int*) malloc(5 * sizeof(int)); // reserves an int address (space) in the heap

    if (ptr == NULL)
    {
        printf("Error allocating memory ... \n");
        exit(0);
    }

    for (int i = 1; i < 6; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum : %d\n", sum);

    free(ptr); // free the space which was reserved in the heap

    return 0;
}
