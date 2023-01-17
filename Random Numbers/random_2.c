#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int random_num = (rand() % 10) + 1;
    printf("Printing a random number between 1 an 10 : %d\n", random_num);

    return 0;
}