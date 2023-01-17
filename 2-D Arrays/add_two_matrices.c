#include <stdio.h>

void take_input(int [][2], int);
void calculate_sum(int [][2], int [][2], int [][2], int);
int main(void)
{
    int A[2][2], B[2][2], Sum[2][2];
    take_input(A, 2);
    take_input(B, 2);

    calculate_sum(A, B, Sum, 2);

    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void take_input(int matrix[][2], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter row = %d, col = %d : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void calculate_sum(int matrix_1[][2], int matrix_2[][2], int result[][2], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }
}
