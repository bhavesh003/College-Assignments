/* Write a program to accept three integers as command line arguments and find the minimum,
maximum and average of the three. Display error message if invalid number of arguments are entered. */

#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define AVG(x, y, z) ((x + y + z) / 3)

int main()
{
    int a, b, c, check;
    printf("Enter 3 Integer arguments :\n");
    check = scanf("%d%d%d", &a, &b, &c);

    if (check != 3)
    {
        printf("Please Enter 3 arguments & They should be integer value");
        return 0;
    }

    printf("Maximum = %d\n", MAX(MAX(a, b), c));
    printf("Minimum = %d\n", MIN(MIN(a, b), c));
    printf("Average = %d\n", AVG(a, b, c));

    return 0;
}
