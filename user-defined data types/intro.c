#include <stdio.h>


typedef struct
{
    int x;
    int y;
}point;


int main(void)
{
    
    point point_;
    point_.x = 2;
    point_.y = 5;

    printf("X = %d\n", point_.x);
    printf("Y = %d\n", point_.y);
    return 0;
}