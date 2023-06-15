//write a program to accept character, an integer n & display the next n character

#include <stdio.h>

int main()
{
    char ch;
    int n;
    printf("Enter a character : ");
    scanf("%c", &ch);
    printf("Enter a integer : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%c ", ++ch);
    }

    return 0;
}