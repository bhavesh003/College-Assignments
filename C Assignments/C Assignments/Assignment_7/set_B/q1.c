#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int count = 0;
    printf("First 10 Prime Numbers are :\n");
    for (int i = 2; count < 10; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
            count++;
        }
    }
    return 0;
}