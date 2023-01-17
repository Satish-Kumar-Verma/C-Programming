#include <stdio.h>


int main(void)
{
    int input;
    int i = 1;
    do
    {
        printf("Enter a positive integer : ");
        scanf("%d", &input);
    }while(!(input > 0));

    while (i <= 10)
    {
        printf("%d x %d = %d \n", input, i, input * i);
        i++;
    }
    

    return 0;
}