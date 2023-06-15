//Write a program to accept a number and check if it is divisible by 5 and 7

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number = ");
    scanf("%d", &n);

    if ((n % 3 == 0) && (n % 7 != 0))
    {
        printf("%d is divisible by 5 and 7", n);
    }
    else if (n % 5 == 0)
    {
        printf("%d is divisible by 5\n", n);
    }
    else if (n % 7 == 0)
    {
        printf("%d is divisible by 7", n);
    }
    else
    {
        printf("%d is not divisible by 5 and 7", n);
    }

    return 0;
}
