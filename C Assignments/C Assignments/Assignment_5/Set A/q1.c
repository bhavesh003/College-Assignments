#include <stdio.h>
int main()
{
    int a, b, i, flag;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    if (a < b)
    {
        printf("Prime numbers between %d and %d are as following \n", a, b);

        while (a < b)
        {
            flag = 0;

            if (a <= 1)
            {
                ++a;
                continue;
            }

            for (i = 2; i <= a / 2; ++i)
            {
                if (a % i == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
                printf("%d\n", a);
            ++a;
        }
    }

    else
    {
        printf("Invalid");
    }

    return 0;
}