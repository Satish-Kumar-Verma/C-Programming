#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_die();
int main(void)
{
    srand(time(NULL));
    int score_A = 0, score_B = 0;
    int i = 0;
    int temp;
    while (!(score_A == 100 || score_B == 100))
    {
        if (i % 2 == 0)
        {
            printf("Player A is rolling the dice!\n");
            temp = roll_die();
            printf("Player A got : %d \n", temp);
            if (score_A + temp <= 100)
            {
                score_A += temp;
            }
            else
            {
                printf("Score got exceeded 100!\n");
            }
            printf("Score of Player A : %d\n", score_A);
        }

        else
        {
            printf("Player B is rolling the dice!\n");
            temp = roll_die();
            printf("Player B got : %d \n", temp);
            if (score_B + temp <= 100)
            {
                score_B += temp;
            }
            else
            {
                printf("Score got exceeded 100!\n");
            }
            printf("Score of Player B : %d\n", score_B);
        }
        i++;
    }

    printf("Dice was rolled %d times.\n", i);

    if (score_A == 100)
    {
        printf("Player A won the race!\n");
    }

    else
    {
        printf("Player B won the race!\n");
    } 
    return 0;
}

int roll_die()
{ 
    int result;
    result = (rand() % 6) + 1;
    return result;
}
