#include <stdio.h>
int linear_search(int[], int, int);
int main()
{
    int a[10], key, c, n, position;
    printf("Enter total number of elements in array :\n");
    scanf("%d", &n);
    printf("Enter %d numbers :\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the number to search : ");
    scanf("%d", &key);
    position = linear_search(a, n, key);
    if (position == -1)
        printf("%d is not present in the array.\n", key);
    else
        printf("%d is present at the location %d.\n", key, position);
    return 0;
}
int linear_search(int a[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            return i;
    }
    return -1;
}