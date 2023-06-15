#include <stdio.h>
int main()
{
    int ref_str[] = {3, 4, 5, 6, 3, 4, 7, 3, 4, 5, 6, 7, 2, 4, 6};
    int page_fault = 0, frames, m, n, s, pages = 15;

    printf("enter no of frame: ");
    scanf("%d", &frames);

    for (int i = 1; i <= frames; i++)
    {
        printf("F%d\t", i);
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
                page_fault--;
            }
        }
        page_fault++;
        if ((page_fault <= frames) && (s == 0))
        {
            temp[m] = ref_str[m];
        }
        else if (s == 0)
        {
            temp[(page_fault - 1) % frames] = ref_str[m];
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
    printf("\n total PF %d\n", page_fault);
}