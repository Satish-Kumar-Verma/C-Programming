#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 12;
    int b = 20;
    
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (a * i == b * j)
            {
                printf("LCM(%d, %d) = %d\n", a, b, a * i);
                goto here;
            }
        }
    }
    here:
    return 0;
}
