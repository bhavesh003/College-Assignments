/* Accept n integers in an array. Copy only the non-zero elements to another array
(allocated using dynamic memory allocation). Calculate the sum and average of non-zero elements */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, limit, i, sum = 0;

    printf("Enter limit of the array : ");
    scanf("%d", &limit);

    p = (int *)malloc(limit * sizeof(int));
    printf("\nInput %d number of elements\n", limit);
    for (i = 0; i < limit; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", (p + i));
    }

    printf("\nEntered array elements are:\n");
    for (i = 0; i < limit; i++)
    {
        printf("%d ", *(p + i));
    }

    for (i = 0; i < limit; i++)
    {
        sum += *(p + i);
    }
    printf("\n\nSum of array elements is : %d\n", sum);
    printf("Average of array elements is : %d\n\n", sum / limit);

    return 0;
}