#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    int n;
    int i = 1;
    bool kontinue = true;
    scanf("%d", &n);


    while (kontinue == true)
    {
        if (i <= n)
        {
            printf("%d\n", i);
        }
        else
        {
            kontinue = false;
        }
        i++;
    }

    return 0;
}