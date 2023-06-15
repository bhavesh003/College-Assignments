#include <stdio.h>
#include <string.h>

char *revStr(char *p);

int main(int argc, char *argv[])
{
    char a[50], b[50];
    printf("Enter string One: ");
    scanf("%s", a);
    printf("Enter second String: ");
    scanf("%s", b);
    printf("\nSelect One of the following operations:\n");
    printf("1. Copy\n2. Concatenate\n3. Length\n4. Reverse\n5. Exit");
    while (1)
    {
        int input;
        printf("\nInput the respective number of the operation: ");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("\nCopying the second string to the first\n");
            strcpy(a, b);
            printf("String Copied!\n");
            puts(a);
            break;
        case 2:
            printf("\nConcatenating Strings\n");
            strcat(a, b);
            printf("2nd String Concatenated with the 1st String!\n");
            puts(a);
            break;
        case 3:
            printf("\nLength of the first String: %ld\n", strlen(a));
            printf("Length of the second String: %ld\n", strlen(b));
            break;
        case 4:
            printf("\nReverse of the first string: ");
            revStr(a);
            puts(a);
            printf("Reverse of the second string: ");
            revStr(b);
            puts(b);
            break;
        case 5:
            return 0;
        }
    }
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