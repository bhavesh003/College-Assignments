#include <stdio.h>
int main()
{
    int ref_str[] = {0, 2, 1, 6, 4, 0, 1, 0, 3, 1, 2, 1};
    int frames = 3, pages = 12, pf = 0;
    int m, n, s;
    for (int i = 0; i <= frames; i++)
    {
        printf("f%d\t", i);
    }
    int temp[frames];
    for (m = 0; m < frames; m++)
    {
        temp[m] = -1;
    }
    for (m = 0; m < pages; m++)
    {
        s = 0;
        for (n = 0; n < frames; n++)
        {
            if (ref_str[m] == temp[n])
            {
                s++;
                pf--;
            }
        }
        pf++;
        if ((pf <= frames) && (s == 0))
        {
            temp[m] = ref_str[m];
        }
        else if (s == 0)
        {
            temp[(pf - 1) % frames] = ref_str[m];
        }
        printf("\n");
        for (n = 0; n < frames; n++)
        {
            if (temp[n] != -1)
                printf("%d\t", temp[n]);
            else
                printf("-\t");
        }
    }
    printf("\n\n PF: %d", pf);
}