#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character : ");
    scanf(" %c", &ch);

    if (isupper(ch))
    {
        printf("%c\n", ch + 32);
    }
    else if (islower(ch))
    {
        printf("%c\n", ch - 32);
    }
    else
    {
        printf("Input is not an aplhabet");
    }
    return 0;
}