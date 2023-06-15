//Accept an integer & find the sum of it's first & last digit

#include <stdio.h>

int main()
{
    int n, ld, fd;
    printf("Enter the number : ");
    scanf("%d", &n);

    ld = n % 10, fd = n;
    while (n >= 10)
        n /= 10;

    fd = n;

    printf("Sum of first & last digit is %d", fd + ld);

    return 0;
}