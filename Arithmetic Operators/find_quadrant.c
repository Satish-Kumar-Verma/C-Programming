#include <stdio.h>

int main(void)
{
    int x = 3;
    int y = 1;
    if (x > 0 && y > 0)
        printf("First!\n");
    
    else if(x < 0 && y > 0)
        printf("Second!\n");

    else if(x < 0 && y < 0)
        printf("Third!\n");

    else if(x > 0 && y < 0)
        printf("Fourth!\n");
    
    else
    {
        printf("Origin!\n");
    }
    
    return 0;
}