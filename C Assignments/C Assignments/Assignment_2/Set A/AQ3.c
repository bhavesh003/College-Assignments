//Accept the character as input and check whether the character is a digit. Check if it is in the range 0 to 9 both inclusive

#include <stdio.h>

int main()
{
    char ch;

    printf("Input a Character :");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("%c is between 0 & 9", ch);
    }
    else if (ch > '9' || ch < '0')
    {
        printf("%c is not a digit", ch);
    }
    return 0;
}