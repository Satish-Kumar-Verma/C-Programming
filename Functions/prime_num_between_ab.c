#include <stdio.h>
#include <stdbool.h>
#define LIMIT 100

bool is_prime(int);
void print_array(int[], int);

int main(void)
{
    int a, b;
    int count = 0;
    
    int primes[LIMIT];

    printf("Enter (a, b) :");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (is_prime(i))
        {
            primes[count] = i;
            count++;
        } 
    }
    printf("\n");
    printf("There are %d prime numbers between %d and %d.\n", count, a, b);

    print_array(primes, count);
    
    return 0;
}

bool is_prime(int n)
{
    if (n == 1)
        return false;

    else if (n == 2)
        return true;

    else 
    {
        for(int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                return false;
        }
    }
    return true;
}   

void print_array(int arr[], int size)
{
    printf("Elements from the array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}