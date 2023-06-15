#include <stdio.h>

int arr[25];
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            int m;
            printf("Enter a number in range of 1 to 25: ");
            scanf("%d", &m);
            if (m > 0 && m < 26)
                arr[m]++;
            else
            {
                printf("\tInvalid Input Try Again\n");
                --i;
            }
        }
        printf("\n");
        for (int i = 1; i <= 25; i++)
        {
            if (arr[i] != 0)
                printf("%d occured =  %d times\n", i, arr[i]);
        }
    }
    else
        printf("Invalid Value Of N\n");
    return 0;
}