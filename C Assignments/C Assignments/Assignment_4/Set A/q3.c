//Accept 2 numbers m & n. Display all those number between m & n which is divisible by 3 but not divisible by 7.

#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the first number : ");
    scanf("%d", &m);
    printf("Enter the second number : ");
    scanf("%d", &n);

    for (int i = m; i <= n; i++)
    {
        if ((i % 3 == 0) && (i % 7 != 0))
            printf("%d\n", i);
    }
    printf("These are the numbers from %d to %d, which are divisible by 3 but not divisible by 7", m, n);

    return 0;
}