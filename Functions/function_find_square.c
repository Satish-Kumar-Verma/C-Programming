#include <stdio.h>

int square_(int);

int main(void)
{
    int num, sq; // 0x01340

    printf("Enter an Integer : ");
    scanf("%d", &num);

    sq = square_(num);
    printf("Square of %d is %d.\n", num, sq);
    return 0;
}

int square_(int x)
{
    int sq = x * x; // 0x07463
    return sq;
}