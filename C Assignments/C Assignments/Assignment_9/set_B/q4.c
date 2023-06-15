#include <stdio.h>
#define LIMIT 5

void get_set_elements(int array[])
{
    int count;
    for (count = 0; count < LIMIT; count++)
    {
        printf("Enter Element No. %d: ", count + 1);
        scanf("%d", &array[count]);
    }
}

void display_input_set(int array[], int total)
{
    int count;
    for (count = 0; count < total; count++)
    {
        printf("%d  ", array[count]);
    }
    printf("\n");
}

void sort_array_elements(int array[])
{
    int i, j, temp;
    for (i = 0; i < LIMIT; i++)
    {
        for (j = i + 1; j < LIMIT; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

int intersection_function(int set_A[], int set_B[], int intersection_array[])
{
    int i = 0, j = 0, k = 0;
    while ((i < LIMIT) && (j < LIMIT))
    {
        if (set_A[i] < set_B[j])
        {
            i++;
        }
        else if (set_A[i] > set_B[j])
        {
            j++;
        }
        else
        {
            intersection_array[k] = set_A[i];
            i++;
            j++;
            k++;
        }
    }
    return (k);
}

int union_function(int set_A[], int set_B[], int union_array[])
{
    int i = 0, j = 0, k = 0;
    while ((i < LIMIT) && (j < LIMIT))
    {
        if (set_A[i] < set_B[j])
        {
            union_array[k] = set_A[i];
            i++;
            k++;
        }
        else if (set_A[i] > set_B[j])
        {
            union_array[k] = set_B[j];
            j++;
            k++;
        }
        else
        {
            union_array[k] = set_A[i];
            i++;
            j++;
            k++;
        }
    }
    if (i == LIMIT)
    {
        while (j < LIMIT)
        {
            union_array[k] = set_B[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i < LIMIT)
        {
            union_array[k] = set_A[i];
            i++;
            k++;
        }
    }
    return (k);
}

int main()
{
    int set_A[LIMIT], set_B[LIMIT], intersection_array[LIMIT], union_array[LIMIT * 2];
    int total;

    printf("\nEnter Elements of SET A\n");
    get_set_elements(set_A);

    printf("\nEnter Elements of SET B\n");
    get_set_elements(set_B);

    printf("\nElements of Set A: ");
    display_input_set(set_A, LIMIT);

    printf("\nElements of Set B: ");
    display_input_set(set_B, LIMIT);

    sort_array_elements(set_A);
    sort_array_elements(set_B);

    printf("\nSorted Set A:\t");
    display_input_set(set_A, LIMIT);

    printf("\nSorted Set B: ");
    display_input_set(set_B, LIMIT);

    total = intersection_function(set_A, set_B, intersection_array);
    printf("\nIntersection Set: ");
    display_input_set(intersection_array, total);

    total = union_function(set_A, set_B, union_array);
    printf("\nUnion Set: ");
    display_input_set(union_array, total);

    printf("\n");

    return 0;
}