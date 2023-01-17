#include <stdio.h>


int main(void)
{
    int matrix[4][4];
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("Enter row = %d, col = %d : ", row + 1, col + 1);
            scanf("%d", &matrix[row][col]);
        }
    }

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}