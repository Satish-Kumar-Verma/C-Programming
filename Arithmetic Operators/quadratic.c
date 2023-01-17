#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double root1, root2, d;
    double real_part, img_part;
    printf("Enter (a, b, c) : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Root 1 : %.2lf\n", root1);
        printf("Root 2 : %.2lf\n", root2);
    }

    else if(d == 0)
    {
        root1 = (-b / (2 * a));
        root2 = root1;

        printf("Root 1 : %.2lf\n", root1);
        printf("Root 2 : %.2lf\n", root2);
    }

    else 
    {
        
        real_part = -b / (2 * a);
        img_part = sqrt(-d) / (2 * a);

        printf("Root 1 : %.2lf + %.2lfi\n", real_part, img_part);
        printf("Root 2 : %.2lf - %.2lfi\n", real_part, img_part);
    }
    return 0;
}