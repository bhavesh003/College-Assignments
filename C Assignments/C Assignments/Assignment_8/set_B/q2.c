#include <stdio.h>
static int sum = 0;
void sod(short int n)
{
    if (n == 0)
    {
        printf("%d\n", sum);
        if (sum <= 9)
            return;
        n = sum;
        sum = 0;
    }
    sum += (n % 10);
    sod(n / 10);
}

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    sod(n);
    return 0;
}