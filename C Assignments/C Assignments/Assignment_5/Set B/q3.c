#include <stdio.h>

int main()
{
    char ch, eof;
    printf("Enter character for EOF : ");
    scanf("%c", &eof);

    int tline = 0, maxline = 0, count = 0;

    while (1)
    {
        scanf("%c", &ch);
        ++count;
        if (ch == '\n')
        {
            tline++;
            if (maxline < count)
                maxline = count;
            // count = 0;
        }
        if (ch == eof)
        {
            if (maxline < count)
                maxline = count;
            //count = 0;
            break;
        }
    }
    printf("Total number of lines is %d\n", tline);
    printf("Max length of line is %d", maxline);

    return 0;
}