//write C program to accept n numbers from user & find sum of odds & evens

#include <stdio.h>

int main()
{
    int n, m, os = 0, es = 0;

    printf("Total numbers : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &m);

        if (m % 2 == 0)
            es += m;
        else
            os += m;
    }
    printf("Sum of odds = %d\n", os);
    printf("Sum of evens = %d", es);
    return 0;
}