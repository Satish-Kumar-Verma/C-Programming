#include <stdio.h>

int main(void)
{
    int input;
    int sum = 0;
    float average = 0.0;
    for(int i = 1; i <= 10; i++)
    {
        printf("%d time : ", i);
        scanf("%d", &input);
        sum = sum + input;
    }
    average = (float)sum / (float)10;

    printf("Sum : %d\n", sum);
    printf("Average : %.2f\n", average);
    return 0;
}