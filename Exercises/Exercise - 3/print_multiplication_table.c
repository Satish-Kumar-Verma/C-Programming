#include <stdio.h>


int main(void)
{
    int input;
    int temp;
    printf("Enter the value of n to print the multiplication table from 1 to n : ");
    scanf("%d", &input);

    for(int row = 1; row <= 10; row++)
    {
        for(int col = 1; col <= input; col++)
        {
            temp = row * col;
            printf("%d x %d = %d\t", col, row, temp);
        }
        printf("\n");
    }
    return 0;
}
