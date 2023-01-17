#include <stdio.h>
#include <stdbool.h>

#define LIMIT 1000

int main(void)
{
    int first_term = 0, second_term = 1, temp = 0;

    bool stop_now = false;
    printf("%d ", first_term);
    printf("%d ", second_term);

    while (stop_now == false)
    {
        temp = first_term + second_term;
        if (temp > LIMIT)
        {
            stop_now = true;
            break;
        }
        printf("%d ", temp);

        first_term = second_term;
        second_term = temp;
    }
    printf("\n");
    return 0;
}