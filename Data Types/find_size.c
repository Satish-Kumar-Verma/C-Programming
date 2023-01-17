#include <stdio.h>

int main(void)
{
    int a;
    float b;
    char c;
    double d;
    long int e;
    long long int f;
    // This program is to find the size of int, float, char and double.

    printf("Size of int    : %zu\n", sizeof(a));
    printf("Size of float  : %zu\n", sizeof(b));
    printf("Size of char   : %zu\n", sizeof(c));
    printf("Size of double : %zu\n", sizeof(d));
    printf("Size of long int : %zu\n", sizeof(e));
    printf("Size of long long int : %zu\n", sizeof(f));

    return 0;
}