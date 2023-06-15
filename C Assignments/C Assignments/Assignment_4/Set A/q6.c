//Accept n numbers & count no.of positive, negative & zero value

#include <stdio.h>

int main()
{
    int n, m, pnum = 0, nnum = 0, z = 0;
    printf("Total numbers : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &m);
        if (m > 0)
            pnum++;
        else if (m < 0)
            nnum++;
        else
            z++;
    }
    printf("Total\nPositive values : %d\nNegative values : %d\nZero values : %d", pnum, nnum, z);

    return 0;
}