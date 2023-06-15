#include <stdio.h>
int main()
{
    int i, j;
    char ch = 'A';
    char ch2 = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c%c ", ch++, ch2++);
        }
        printf("\n");
    }
    return 0;
}