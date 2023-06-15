#include <stdio.h>
#define Limit 10
int arr[10];

int bubbleSort(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    if (n < Limit && n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter number %d : ", i + 1);
            scanf("%d", &arr[i]);
        }
        bubbleSort(arr, n);
        printf("\nSorted Order is \n");
        for (int i = 0; i < n; i++)
            printf("%d  ", arr[i]);
    }
    else
        printf("Try a value where n>0 and n<%d", Limit);

    return 0;
}