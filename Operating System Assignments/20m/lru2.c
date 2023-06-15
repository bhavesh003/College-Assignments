#include <stdio.h>

int LRU(int time[], int n)
{
    int i, min = time[0], pos = 0;

    for (i = 1; i < n; ++i)
    {
        if (time[i] < min)
        {
            min = time[i];
            pos = i;
        }
    }
    return pos;
}

int main()
{
    int frames, pages = 13, temp[10], ref_str[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2}, s = 0, time[10], flag1, flag2, m, n, pos, page_faults = 0;
    printf("Enter number of frames: ");
    scanf("%d", &frames);

    for (m = 0; m < frames; ++m)
    {
        temp[m] = -1;
    }

    for (m = 0; m < pages; ++m)
    {
        flag1 = flag2 = 0;

        for (n = 0; n < frames; ++n)
        {
            if (temp[n] == ref_str[m])
            {
                s++;
                time[n] = s;
                flag1 = flag2 = 1;
                break;
            }
        }

        if (flag1 == 0)
        {
            for (n = 0; n < frames; ++n)
            {
                if (temp[n] == -1)
                {
                    s++;
                    page_faults++;
                    temp[n] = ref_str[m];
                    time[n] = s;
                    flag2 = 1;
                    break;
                }
            }
        }

        if (flag2 == 0)
        {
            pos = LRU(time, frames);
            s++;
            page_faults++;
            temp[pos] = ref_str[m];
            time[pos] = s;
        }

        printf("\n");

        for (n = 0; n < frames; ++n)
        {
            if (temp[n] != -1)
                printf("%d\t", temp[n]);
            else
                printf("-\t");
        }
    }
    printf("\n\nTotal Page page_faults = %d", page_faults);

    return 0;
}