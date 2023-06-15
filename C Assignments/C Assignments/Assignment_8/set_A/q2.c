#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    gcd(b, a % b);
}

int main()
{
    int n, m;
    printf("Enter two numbers: ");
    scanf("%d%d", &n, &m);
    printf("The GCD of %d and %d = %d\n", n, m, gcd(n, m));
    return 0;
}
