#include <stdio.h>

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(void)
{
    enum week today;
    today = Thursday;
    printf("%d\n", today + 1);
    return 0;
}