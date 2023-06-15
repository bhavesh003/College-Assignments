#include <stdio.h>
#include <ctype.h>
int main()
{
    int choice;
    printf("Please input your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        int intType;
        float floatType;
        double doubleType;
        char charType;

        printf("Size of int: %zu bytes\n", sizeof(intType));
        printf("Size of float: %zu bytes\n", sizeof(floatType));
        printf("Size of double: %zu bytes\n", sizeof(doubleType));
        printf("Size of char: %zu byte\n", sizeof(charType));
    }
        break;

    case 2:
    {
        char ch;
        printf("Enter an alphabet :");
        scanf(" %c", &ch);
        if (isalpha(ch))
            printf("%c Is an alphabet", ch);
        else
            printf("%c is not an alphabet", ch);
    }
        break;

    case 3:
    {
        int n;
        printf("Enter a number : ");
        scanf("%d", &n);

        if ((n % 3 == 0) && (n % 4 == 0))
            printf("%d is divisible by 3 and 4", n);
        else if (n % 3 == 0)
            printf("%d is divisible by 3\n", n);
        else if (n % 4 == 0)
            printf("%d is divisible by 4", n);
        else
            printf("%d is not divisible by 3 and 4", n);
    }
        break;

    case 4:
    {
        int a, b;
        printf("Enter the value of a :");
        scanf("%d", &a);
        printf("Enter the value of b :");
        scanf("%d", &b);
        printf("Answer = %f", ((9 * a) + (3.9 / b)) - (1 % 2));
    }
        break;

    case 5:
        printf("Exit\n");
        break;

    default:
        printf("Please enter and appropriate choice");
        break;
    }
    return 0;
}