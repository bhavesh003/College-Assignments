// #include <stdio.h>

// int fibonacci(int n)
// {
//     if (n == 0 || n == 1)
//         return n;
//     return fibonacci(n - 2) + fibonacci(n - 1);
// }

// void fibseries(int n)
// {
//     static int first = 0, second = 1, sum = 0;
//     if (n > 1)
//     {
//         sum = first + second;
//         first = second;
//         second = sum;
//         printf("%d  ", sum);
//         fibseries(n - 1);
//     }
// }

// int main()
// {

//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     printf("The first %d Fibonacci series:\n", n);
//     for (int i = 1; i <= n; i++)
//     {
//         //?I found no ways to print the series with the given defination
//         //?fibonacci(n)= fibonacci(n - 2) + fibonacci(n - 1)
//         //!So I used this loop to print the series
//         //*I wrote another function recursive function to print the series
//         //*But it's not from the definition given
//         printf("%d  ", fibonacci(i));
//     }

//     printf("\n\n");
//     printf("The first %d Fibonacci series:\n", n);
//     printf("%d  ", 1);
//     fibseries(n); //&Prints The series without any loops required

//     return 0;
// }
#include <stdio.h>
int fibonacci(int);
int main()
{
    int n, m = 0, i;
    printf("Enter Total terms : ");
    scanf("%d”, &n");
    printf("Fibonacci series terms are :\n");

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", fibonacci(m));
        m++;
    }
    return 0;
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return (n);
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}