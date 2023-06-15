#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter Character : ");
    scanf("%c", &ch);

    if (isalpha(ch))
    {
        if (islower(ch))
        {
            printf("%c is Lowercase Alphabet\n", ch);
            ch = toupper(ch);
            printf("%c\n", ch);
        }
        else
        {
            printf("%c is Uppercase Alphabet\n", ch);
            ch = tolower(ch);
            printf("%c\n", ch);
        }
    }
    else if (isdigit(ch))
    {
        printf("%c is a Digit\n", ch);
    }
    else if (ispunct(ch))
    {
        printf("%c is Punctuation Symbol");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}
