#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character : ");
    scanf(" %c", &ch);

    if (islower(ch) && ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is a vowel", ch);
    }
    else if (!islower(ch))
    {
        printf("%c is not a lower case letter", ch);
    }
    else if (!(islower(ch) && ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
    {
        printf("%c is a consonant", ch);
    }
    else
    {
        printf("Invalid Output");
    }

    return 0;
}