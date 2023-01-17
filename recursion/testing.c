#include <stdio.h>

void towers_hanoi(int n)
{
    int x;
    for (x = 1; x < (1 << n); x++)
        printf("Move from Pole %d to Pole %d\n", (x & (x - 1)) % 3, (((x | (x - 1)) + 1) % 3));
}

int main()
{
    int m;
    printf("\n Enter the Number of Disks : ");
    scanf("%d", &m);
    towers_hanoi(m);
    return 0;
}