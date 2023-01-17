#include <stdio.h>


int main(void)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}