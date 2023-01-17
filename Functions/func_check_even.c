#include <stdio.h>
#include <stdbool.h>

bool check_even(int);
void hello(void);

int main(void)
{
    int num;
    bool is_even = false;
    printf("Enter an Integer : ");
    scanf("%d", &num);

    is_even = check_even(num);

    if (is_even == true)
        printf("Even\n");
    
    else
        printf("Odd\n");

    
    hello();
    
    return 0;
}

bool check_even(int x)
{
    if(x % 2 == 0)
        return true;
    
    else
        return false;
}

void hello(void)
{
    printf("Hello!\n");
}