// Write a program to accept an integer using pointer and check whether it is even or odd

#include <stdio.h>
int main()
{
    int n, *p = &n;

    printf("Enter number : ");
    scanf("%d", p);

    if (*p == 0)
        printf("0 is neutral value.");
    else if (*p % 2 == 0)
        printf("%d is even.\n", *p);
    else
        printf("%d is odd.\n", *p);

    return 0;
}