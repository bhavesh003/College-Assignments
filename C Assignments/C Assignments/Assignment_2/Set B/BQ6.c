#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter first numbers : ");
    scanf("%d", &a);
    printf("Enter second numbers : ");
    scanf("%d", &b);
    printf("Enter third numbers : ");
    scanf("%d", &c);
    a = a - b;
    c = c - b;
    
    printf("After subtracting the second number from the first and third number\n");
    
    if (a > b && a > c)
        printf("The first number %d is the greatest number", a);
    else if (b > c)
        printf("The second number %d is the greatest number", b);
    else
        printf("the third number %d is the greatest number", c);
   
    return 0;
}