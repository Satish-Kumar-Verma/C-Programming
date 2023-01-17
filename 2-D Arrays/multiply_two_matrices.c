#include <stdio.h>
#define SIZE 2
void take_input(int [][SIZE], int);
void calculate_product(int [][SIZE], int [][SIZE], int [][SIZE]);
void print_matrix(int [][SIZE]);
void mult(int [][SIZE], int [][SIZE], int [][SIZE], int, int);
int main(void)
{
    int matrix_1[SIZE][SIZE], matrix_2[SIZE][SIZE], result[SIZE][SIZE];

    take_input(matrix_1, SIZE);
    take_input(matrix_2, SIZE);

    // calculate_product(matrix_1, matrix_2, result);
    mult(matrix_1, matrix_2, result, SIZE, SIZE);

    print_matrix(result);

    return 0;
}

void take_input(int matrix[][SIZE], int row)
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

void calculate_product(int m_1[][SIZE], int m_2[][SIZE], int result[][SIZE])
{
    int flag = 1;
    int i = 0;
    int j = 0;
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            if (i == 0)
            {
                result[i][j] = (m_1[i][i] * m_2[i][j]) + (m_1[i][i + 1] * m_2[i + 1][j]);
                j++;
            }

            else if (i == 1)
            {
                result[i][j] = (m_1[i][i - 1] * m_2[i - 1][j]) + (m_1[i][i] * m_2[i][j]);
                j++;
            }
        }
        j = 0;
        i++;
    }
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


void mult(int a[][SIZE], int b[][SIZE], int mul[][SIZE], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < col; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}