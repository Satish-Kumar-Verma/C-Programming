#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int random_num = rand();
    printf("Random Number : %d\n", random_num);

    return 0;
}