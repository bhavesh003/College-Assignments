#include <stdio.h>
void display_input_set(int array[], int total)
{
    for (int count = 0; count < total; count++)
    {
        printf("%d  ", array[count]);
    }
}
void get_set_elements(int array[], int n)
{
    for (int count = 0; count < n; count++)
    {
        printf("Enter Element No. %d: ", count + 1);
        scanf("%d", &array[count]);
    }
}
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("\nThe Key %d is present at index position %d\n", key, i + 1);
            return i;
        }
    }
    printf("The Key Is not present in the given Array");
    return -1;
}
int main()
{
    int arr[10], key, n;
    do
    {
        printf("Enter the length of array: ");
        scanf("%d", &n);
        if (n < 0 || n > 10)
            printf("\tInvalid Input Try Again\n");
    } while (n < 0 || n > 10);
    get_set_elements(arr, n);
    printf("\nEntered Array : ");
    display_input_set(arr, n);
    printf("\n\nEnter Key Value : ");
    scanf("%d", &key);
    linearSearch(arr, n, key);
    return 0;
}
