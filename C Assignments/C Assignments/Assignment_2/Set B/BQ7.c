#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter first numbers : ");
    scanf("%d", &a);
    printf("Enter second numbers : ");
    scanf("%d", &b);
    printf("Enter third numbers : ");
    scanf("%d", &c);
    printf("Enter fourth numbers : ");
    scanf("%d", &d);

    int min_ab, min_cd, min;
    min_ab = a < b ? a : b;
    min_cd = c < d ? c : d;
    
    min = min_ab < min_cd ? min_ab : min_cd;

    printf("%d is the smallest number", min);

    return 0;
}