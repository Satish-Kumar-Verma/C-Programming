#include <stdio.h>


int main(void)
{
    int input = 10;

    switch (input)
    {
        case 1:
            printf("One!\n");
            break;
        
        case 2:
            printf("Two!\n");
            break;

        case 10:
            printf("Ten\n");
            break;
    
        default:
            printf("Hell0!\n");
            break;
    }
    return 0;
}