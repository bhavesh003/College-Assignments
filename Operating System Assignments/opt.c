#include <stdio.h>
int main()
{
    int flag1, flag2, flag3, m, n, k, s;
    int page_fault = 0, frames = 3, pages = 16, pos = 0;
    int ref_str[] = {12, 15, 12, 18, 6, 8, 11, 12, 19, 12, 6, 8, 12, 15, 19, 8};

    for (int i = 1; i <= frames; i++)
    {
        printf("F%d\t", i);
    }

    int temp[frames];
    int time[frames];

    for (m = 0; m < frames; m++)
    {
        temp[m] = -1;
    }

    for (m = 0; m < pages; m++)
    {

        flag1 = flag2 = 0;

        for (n = 0; n < frames; n++)
        {
            if (temp[n] == ref_str[m])
            {
                flag1 = flag2 = 1;
                break;
            }
        }

        if (flag1 == 0)
        {
            for (n = 0; n < frames; n++)
            {
                if (temp[n] == -1)
                {
                    page_fault++;
                    temp[n] = ref_str[m];
                    flag2 = 1;
                    break;
                }
            }
        }

        if (flag2 == 0)
        {
            flag3 = 0;
            for (n = 0; n < frames; n++)
            {
                time[n] = -1;
                for (k = m + 1; k < pages; k++)
                {
                    if (temp[n] == ref_str[k])
                    {
                        time[n] = k;
                        break;
                    }
                }
            }

            for (n = 0; n < frames; n++)
            {
                if (time[n] == -1)
                {
                    pos = n;
                    flag3 = 1;
                    break;
                }
            }

            if (flag3 == 0)
            {
                s = time[0];
                // pos = 0;

                for (n = 1; n < frames; n++)
                {
                    if (time[n] > s)
                    {
                        s = time[n];
                        pos = n;
                    }
                }
            }

            temp[pos] = ref_str[m];
            page_fault++;
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

    printf("\n\nTotal PF = %d", page_fault);
    return 0;
}