#include <stdio.h>
#define SIZE 2

void print_matrix(int [][SIZE]);
int main(void)
{
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int transpose_m[2][2];

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            transpose_m[col][row] = matrix[row][col];
        }
    }


    print_matrix(matrix);
    print_matrix(transpose_m);

    return 0;
}

void print_matrix(int matrix[][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n\n");
    }
}