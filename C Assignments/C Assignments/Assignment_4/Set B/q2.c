// write a program to accept an integer & check if it is prime or not

#include <stdio.h>
#include <math.h>

int main()
{
    int n, a = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % 1 == 0)
            a = 0;
        break;
    }
    if (n == 1)
        printf("1 is neither prime nor composite");
    else
    {
        if (a)
            printf("%d is prime number", n);
        else
            printf("%d is not prime number", n);
    }
    return 0;
}