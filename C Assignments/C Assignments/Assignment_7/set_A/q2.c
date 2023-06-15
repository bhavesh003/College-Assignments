#include <stdio.h>

void next_chars(int n, char ch)
{
    for (int i = 0; i < n; i++)
        printf("%c ", ++ch);
}

int main()
{
    int n;
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The next %d character from '%c' are : ", n, ch);
    next_chars(n, ch);

    return 0;
}