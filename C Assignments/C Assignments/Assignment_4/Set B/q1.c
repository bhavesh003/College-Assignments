// write a program to display the first n fibonacci number

#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, t;

    printf("Enter a number of terms : ");
    scanf("%d", &n);
    printf("Fibonacci Series : ");
    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", t1);
        t = t1 + t2;
        t1 = t2;
        t2 = t;
    }

    return 0;
}