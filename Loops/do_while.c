#include <stdio.h>


int main(void)
{
    int n;
    do
    {
        printf("Enter a positive integer : ");
        scanf("%d", &n);
    } while (n < 1); // !true == false
    

    if(n % 2 == 0)
        printf("Even!\n");
    else
        printf("Odd!\n");
    return 0;
}