#include <stdio.h>
int main()
{
    int num, r, sum, temp;
    printf("Armstrong numbers from 1 to 500 are\n");

    for (num = 1; num <= 500; num++)
    {
        temp = num;
        sum = 0;

        while (temp != 0)
        {
            r = temp % 10;
            temp = temp / 10;
            sum = sum + (r * r * r);
        }
        if (sum == num)
            printf("%d\n", num);
    }

    return 0;
}