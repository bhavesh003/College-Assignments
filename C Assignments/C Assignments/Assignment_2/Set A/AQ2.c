#include <stdio.h>

int main()
{
    int a, b, c;
   
    printf("Enter first numbers : ");
    scanf("%d", &a);
    printf("Enter Second numbers : ");
    scanf("%d", &b);
    printf("Enter Third numbers : ");
    scanf("%d", &c);

    if (a > b && a < c)
    {
        printf("%d is between %d and %d", a, b, c);
    }
    else
    {
        printf("%d is not between %d and %d", a, b, c);
    }

    return 0;
}
