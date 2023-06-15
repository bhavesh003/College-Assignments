#include <stdio.h>
#include <stdbool.h>
static int mark[20];
int i, j;

int main()
{
    int alloc[5][3] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 3}, {2, 1, 1}, {0, 0, 2}};
    int request[5][3] = {{0, 0, 0}, {2, 0, 2}, {0, 0, 1}, {1, 0, 0}, {0, 0, 2}};
    int totalr[3] = {17, 12, 16}, avail[3], count, totalloc[3], sum, flag;
    bool finish[5] = {false};

    printf("Allocation matrix elements are \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", alloc[i][j]);
        }
        printf("\n");
    }

    printf("\nRequest matrix elements are \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", request[i][j]);
        }
        printf("\n");
    }

    printf("\ntotal resources of r1,r2,r3 respectively are :\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d  ", totalr[i]);
    }

    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 5; j++)
        {
            sum += alloc[j][i];
        }
        totalloc[i] = sum;
    }

    printf("\ntotal allocation of each resource type is :\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d, ", totalloc[i]);
    }

    for (i = 0; i < 3; i++)
    {
        avail[i] = totalr[i] - totalloc[i];
    }

    printf("\nContents of available array is :\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d, ", avail[i]);
    }
    printf("\n");


    while (count)
    {
        for (i = 0; i < 5; i++)
        {
            count = 0;
        
            if (finish[i] == false)
            {
                for (j = 0; j < 3; j++)
                {
                    if (request[i][j] <= avail[j])
                    {
                        count++;
                    }
                }
                flag = false;
                if (count == j)
                {
                    for (j = 0; j < 3; j++)
                    {
                        avail[j] += alloc[i][j];
                    }
                    finish[i] = true;
                    printf("\nProcess %d is transferred to running state and assumed finished", i + 1);
                }
                else
                    flag = true;
            }
        }
        count = 0;
        for (j = 0; j < 3; j++)
        {
            if (finish[j] == true)
            {
                count++;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (finish[i] == false)
        {
            printf("\n Oops! Deadlock detected\n");
            break;
        }
    }
    i = i - 1;
    if (finish[i] == true)
        printf("\nHurray! Deadlock not detected:-)\n");
    return 0;
}