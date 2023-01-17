#include <stdio.h>

enum cards
{
    spade = 10,
    heart = 20,
    diamonds = 30,
    club = 40
}card;

typedef struct Cards
{
   int spade;
   int heart;
   int diamonds;
   int club;
}card_;


int main(void)
{
    card =  diamonds;
    printf("You got %d points.\n", card);

    card_ carddd;
    carddd.club = 10;
    printf("You got %d points.\n", carddd.club);

    return 0;
}