#include <stdio.h>
#include <string.h>

char *revStr(char *p);
int compare_string(char *first, char *second);
void copyString(char *a, char *b);

int main(int argc, char *argv[])
{
    char str[50];
    printf("Enter your string: ");
    scanf("%s", str);
    char flag[50];
    copyString(flag, str);
    revStr(str);
    if (compare_string(str, flag) == 0)
    {
        printf("String is palindrome");
    }
    else
        printf("String is not palindrome");
    return 0;
}

char *revStr(char *p)
{
    char *r = p;
    char *q = &p[strlen(p) - 1];
    short int length = (strlen(p) / 2);
    for (int i = 0; i < length; i++, q--)
    {
        int flag = p[i];
        p[i] = *q;
        *q = flag;
    }
    p = r;
}

int compare_string(char *first, char *second)
{
    while (*first == *second)
    {
        if (*first == '\0' || *second == '\0')
            break;

        first++;
        second++;
    }

    if (*first == '\0' && *second == '\0')
        return 0;
    else
        return -1;
}

void copyString(char *t, char *s)
{
    while (*t++ = *s++)
        ;
}