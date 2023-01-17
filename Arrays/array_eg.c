#include <stdio.h>
#define LIMIT 10

int main(void)
{
    int a[LIMIT];
    a[0] = 1;
    a[1] = 5;
    a[2] = 6;
    a[3] = 18;
    a[4] = 17;
    a[5] = 15;
    // int a[] = {1, 2, 34, 5, 6, 7, 67};
    printf("5th element from the array : %d\n", a[4]);
    return 0;
}