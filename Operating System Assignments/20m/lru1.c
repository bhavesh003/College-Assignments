#include <stdio.h>
int main()
{
    int q[20], p[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2}, n = 13, b[20], c2[20], c = 0, k = 0, c1, d, frames, i, j, r, t;
    printf("Enter no of frames:");
    scanf("%d", &frames);
    printf("\t");
    for (int i = 1; i <= frames; i++)
    {
        printf("F%d\t", i);
    }
    printf("\n");
    q[k] = p[k];
    printf("\t%d\n", q[k]);
    c++;
    k++;
    for (i = 1; i < n; i++)
    {
        c1 = 0;
        for (j = 0; j < frames; j++)
        {
            if (p[i] != q[j])
                c1++;
        }
        if (c1 == frames)
        {
            c++;
            if (k < frames)
            {
                q[k] = p[i];
                k++;
                for (j = 0; j < k; j++)
                    printf("\t%d", q[j]);
                printf("\n");
            }
            else
            {
                for (r = 0; r < frames; r++)
                {
                    c2[r] = 0;
                    for (j = i - 1; j < n; j--)
                    {
                        if (q[r] != p[j])
                            c2[r]++;
                        else
                            break;
                    }
                }
                for (r = 0; r < frames; r++)
                    b[r] = c2[r];
                for (r = 0; r < frames; r++)
                {
                    for (j = r; j < frames; j++)
                    {
                        if (b[r] < b[j])
                        {
                            t = b[r];
                            b[r] = b[j];
                            b[j] = t;
                        }
                    }
                }
                for (r = 0; r < frames; r++)
                {
                    if (c2[r] == b[0])
                        q[r] = p[i];
                    printf("\t%d", q[r]);
                }
                printf("\n");
            }
        }
    }
    printf("\n Total Page Faults = %d\n", c);
}
