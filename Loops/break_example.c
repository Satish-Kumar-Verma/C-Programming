#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 10)
    {
        if (i > 5)
        {
            break;
        }
        else
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}