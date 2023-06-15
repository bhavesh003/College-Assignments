#include <stdio.h>

int isEven(int n)
{
    if (n % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m;
        printf("Enter a number : ");
        scanf("%d", &m);
        if (isEven(m))
            printf("%d is an even number\n", m);
        else
            printf("%d is an odd number\n", m);
    }
    return 0;
}
