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
    if (n == 0 || n == 1)
        return n;

    else 
        return fibo(n - 1) + fibo(n - 2);
}