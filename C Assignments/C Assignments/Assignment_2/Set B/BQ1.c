#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a Character : ");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit", ch);
    }
    else if (islower(ch))
    {
        printf("%c is a Lowercase Alphabet", ch);
    }
    else if (isupper(ch))
    {
        printf("%c is an Uppercase Alphabet", ch);
    }
    else
    {
        printf("%c is neither an Alphabet nor a Digit", ch);
    }
    return 0;
}