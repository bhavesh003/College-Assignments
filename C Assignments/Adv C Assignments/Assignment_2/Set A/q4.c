/* Write a program to display the elements of an array containing n integers in the reverse order using a
pointer to the array */

#include <stdio.h>
int main()
{
    int n, i, a[100];
    int *p;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);
    p = &a[0];
    printf("\nInput %d number of elements\n", n);

    for (i = 0; i < n; i++)
    {
        printf("element %d : ", i + 1);
        scanf("%d", p);
        p++;
    }

    printf("\nThe elements stores into the array are : \n");

    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }

    p = &a[n - 1];

    printf("\nThe elements of array in reverse order are :\n");

    for (i = n; i > 0; i--)
    {
        printf(" %d ", *p);
        p--;
    }
    return 0;
}
