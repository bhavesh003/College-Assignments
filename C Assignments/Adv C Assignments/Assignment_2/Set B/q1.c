/* Accept n integers in array A in main. Write a function which takes this array as parameter and
find minimum and maximum from it using pointer. Display these values in main */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main()
{
    int n, min_ans = INT_MAX, max_ans = INT_MIN;
    int *A = NULL;

    printf("Enter The no. of elements in the array: ");
    scanf("%d", &n);

    A = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        A[i] = m;
    }

    for (int i = 0; i < n; i++)
    {
        min_ans = MIN(min_ans, A[i]);
        max_ans = MAX(max_ans, A[i]);
    }

    printf("min = %d\n", min_ans);
    printf("max = %d", max_ans);

    return 0;
}