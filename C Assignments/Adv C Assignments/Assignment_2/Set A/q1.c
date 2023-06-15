// Write a program to find maximum from two integers using pointers

#include <stdio.h>
int main()
{
    int fno, sno, *p1 = &fno, *p2 = &sno;

    printf("Enter two numbers : ");
    scanf("%d%d", p1, p2);

    if (*p1 > *p2)
    {
        printf("%d is the maximum number.", *p1);
    }
    else
    {
        printf("%d is the maximum number.", *p2);
    }
    return 0;
}
