/* Write a program to allocate memory dynamically for n integers such that the memory is initialized to 0 &
display it */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *p = NULL;
    printf("Enter The no. of elements in the array: ");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        p[i] = 0;
        printf("%d ", p[i]);
    }
    return 0;
}