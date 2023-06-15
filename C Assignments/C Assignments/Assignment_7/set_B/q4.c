#include <stdio.h>

void swap(int *a, int *b)
{
    int hold = *a;
    *a = *b;
    *b = hold;
}

int main()
{
    int n, m;
    printf("Enter value for n : ");
    scanf("%d", &n);
    printf("Enter value for m : ");
    scanf("%d", &m);
    printf("Before swap value of n = %d & m = %d\n", n, m);
    swap(&n, &m);
    printf("After swap value of n = %d & m = %d", n, m);

    return 0;
}