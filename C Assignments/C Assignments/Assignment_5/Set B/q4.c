#include <stdio.h>
int main()
{
    int n, t, sum = 0, rem, count = 0;

    printf("Enter the mumber : ");
    scanf("%d", &n);

    t = n;
    if (n > 0)
    {
        while (t != 0)
        {
            rem = t % 10;
            sum = sum + rem;
            t = t / 10;
        }

        while (n != 0)
        {
            n /= 10;
            ++count;
        }

        printf("Number of digits : %d\n", count);

        printf("Sum of digits : %d", sum);
    }
    else
        printf("Invalid");

    return 0;
}