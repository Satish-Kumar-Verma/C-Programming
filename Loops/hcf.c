#include <stdio.h>


int main(void)
{
    int a, b;
    int hcf;
    printf("Enter (a, b) : ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (a % i == 0 && b % j == 0 && i == j)
            {
                hcf = i;
            }
        }
    }
    
    printf("HCF(%d, %d) = %d\n", a, b, hcf);

    return 0;
}