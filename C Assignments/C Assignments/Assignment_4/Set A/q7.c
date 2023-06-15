//write a program to accept integer & count the number of digits in the number

#include <stdio.h>

int main()
{
    int n, ncount = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    int number = n;
    while (n > 0)
    {
        n = n / 10;
        ncount++;
    }
    printf("Number of digit in %d : %d", number, ncount);

    return 0;
}