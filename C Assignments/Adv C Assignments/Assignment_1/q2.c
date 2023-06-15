//q2 Define a macro MIN which gives the minimum of two numbers. Use this macro to find the minimum of n numbers

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

int main()
{
    int n, ans = INT_MAX;
    int *p = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("\nInput %d number of elements\n", n);

    p = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        p[i] = m;
    }

    for (int i = 0; i < n; i++, p++)
    {
        ans = MIN(ans, *p);
    }

    printf("\nMinimum = %d\n", ans);

    return 0;
}