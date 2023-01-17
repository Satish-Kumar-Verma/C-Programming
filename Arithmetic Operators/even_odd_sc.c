#include <stdio.h>


int main(void)
{
    
    int num = 10;
    switch (num % 2)
    {
        case 0:
        {
            printf("Even!\n");
            break;
        }
        case 1:
        {
            printf("Odd!\n");
            break;
        }
        default:
            printf("Please enter only integers!\n");
            break;
    }
    return 0;
}