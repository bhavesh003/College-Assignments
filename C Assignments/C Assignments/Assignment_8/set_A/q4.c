#include <stdio.h>

int power(int a, int p)
{
    if (p == 0)
        return 1;
    return a * power(a, p - 1);
}

int main()
{
    int n, p;
    printf("Enter a Number and it's Power: ");
    scanf("%d%d", &n, &p);
    printf("%dth power of %d = %d", p, n, power(n, p));
    return 0;
}