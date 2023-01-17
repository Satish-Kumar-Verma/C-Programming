#include <stdio.h>

int main(void)
{
    int celsius;
    float fahrenheit;
    printf("Enter temperature in Celsius : ");
    scanf("%d", &celsius);

    // C = 5/9 (F - 32)
    // F = (9/5)C + 32

    fahrenheit = (9.0 / 5.0) * celsius + 32;
    printf("Fahrenheit : %.2f\n", fahrenheit);
    
    return 0;
}