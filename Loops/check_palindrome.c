#include <stdio.h>


int main(void)
{
    int num, temp, rev = 0;
    printf("Enter an integer : ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0)
    {
        rev = (rev * 10) + temp % 10;
        temp /= 10;
    }
    printf("num = %d, rev = %d\n", num, rev);
    if (num == rev)
    {
        printf("It is a palindrome.\n");
    }
    else
        printf("It is not a palindrome\n");

    return 0;
}