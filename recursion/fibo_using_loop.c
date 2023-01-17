#include <stdio.h>

int fibo(int);
int main(void)
{
    int num;
    printf("Enter the number of terms  : "); // 0, 1, 1, 2, 3, 5, 8
    scanf("%d", &num);

    printf("Sum : %d\n", fibo(num));


    return 0;
}

int fibo(int n)
{
    int first_term = 0;
    int second_term = 1;
    int result = first_term;
    for (int i = 0; i < n; i++)
    {
        result = first_term + second_term;
        first_term = second_term;
        second_term = result;
    }
    return result;
}