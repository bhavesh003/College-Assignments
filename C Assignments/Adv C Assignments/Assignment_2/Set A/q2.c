// Write a program to read two integers using pointers and perform all arithmetic operations on them

#include <stdio.h>

int main()
{
    int n1, n2, *p1 = &n1, *p2 = &n2;

    printf("Enter any two numbers: ");
    scanf("%d%d", p1, p2);

    printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2);
    printf("%d - %d = %d\n", *p1, *p2, *p1 - *p2);
    printf("%d / %d = %d\n", *p1, *p2, *p1 / *p2);
    printf("%d * %d = %d\n", *p1, *p2, *p1 * *p2);

    return 0;
}