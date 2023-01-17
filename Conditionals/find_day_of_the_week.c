#include <stdio.h>

int main(void)
{
    printf("Enter the number of the day of the week [1 - 7] : ");
    int dow;
    scanf("%d", &dow);
    // if(dow > 7)
    // {
    //     if(dow % 7 == 0)
    //         dow = 7;
    //     else
    //         dow = dow % 7;
    // }
    if(dow == 1)
        printf("Sunday!\n");
    
    else if(dow == 2)
        printf("Monday!\n");

    else if(dow == 3)
        printf("Tuesday!\n");

    else if(dow == 4)
        printf("Wednesday!\n");
    
    else if(dow == 5)
        printf("Thurday!\n");

    else if(dow == 6)
        printf("Friday!\n");
    
    else if(dow == 7)
        printf("Saturday!\n");

    return 0;
}