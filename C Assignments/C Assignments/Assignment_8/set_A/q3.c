// #include <stdio.h>

// int fact(int n)
// {
//     if (n == 0)
//         return 1;
//     return n * fact(n - 1);
// }

// int main()
// {
//     int n;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     printf("Factorial = %d", fact(n));
//     return 0;
// }

#include <stdio.h>
int main()
{
    int factorial(int n);
    int number, fact;
    printf("Number : ");
    scanf("%d", &number);
    fact = factorial(number);
    printf("fact is %d", fact);
}
int factorial(int n)
{
    if ((n == 0) || (n == 1))
        return (1);
    else
        return (n * factorial(n - 1));
}