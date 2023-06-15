#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Calculate :\n");
    scanf("%d%c%d", &a, &op, &b);

    if (op == '+')
        printf("%d + %d = %d", a, b, a + b);
    else if (op == '-')
        printf("%d - %d = %d", a, b, a - b);
    else if (op == '*')
        printf("%d * %d = %d", a, b, a * b);
    else if (op == '/')
        printf("%d / %d = %d", a, b, a / b);
    else
        printf("Invalid");

    return 0;
}