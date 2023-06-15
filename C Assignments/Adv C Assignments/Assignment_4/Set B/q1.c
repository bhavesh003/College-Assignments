#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void String_Lower(char string[]);
char **Create2DStr(ssize_t numStrings, ssize_t maxStrLen);

int main()
{
    int i, j, n;
    printf("Enter no. of words you want to Enter: ");
    scanf("%d", &n);
    char **str = Create2DStr(n, 50), temp[50];
    printf("\nEnter %d words:: \n", n);

    for (i = 0; i < n; ++i)
        scanf("%s[^\n]", str[i]);

    for (i = 0; i < n; ++i)
    {
        // strlwr() was not working for some reason I don't know!!
        String_Lower(str[i]);
    }
    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }

    printf("\nIn Dictionary order: \n");
    for (i = 0; i < n; ++i)
    {
        puts(str[i]);
    }
    return 0;
}

void String_Lower(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + 32;
        }
        i++;
    }
}

char **Create2DStr(ssize_t numStrings, ssize_t maxStrLen)
{
    int i;
    char **a = {0};
    a = calloc(numStrings, sizeof(char *));
    for (i = 0; i < numStrings; i++)
    {
        a[i] = calloc(maxStrLen + 1, 1);
    }
    return a;
}

// Demo Input
// Alpha Beta apple butter azure bat cat Cow Dog dice