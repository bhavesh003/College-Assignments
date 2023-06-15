#include <stdio.h>

void dis_word(int n)
{
    switch (n)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    }
}

int main()
{
    int n;
    printf("Enter a single digit number: ");
    scanf("%d", &n);
    if (n >= 0 && n <= 9)
        dis_word(n);
    else
        printf("Out of Bounds");
    return 0;
}