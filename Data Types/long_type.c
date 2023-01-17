#include <stdio.h>

int main(void)
{
    long int a = 7346642; // long a;
    long long int b = 32972398228758273;  // long long b;
    double c = 239548973; // equal to long float
    long double d = 4859834745278947;

    printf("long int = %li\n", a);
    printf("long long int = %lli\n", b);
    printf("double = %lf\n", c);
    printf("long double = %Lf\n", d);
    return 0;
}