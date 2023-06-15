#include <stdio.h>

int my_palindrome(int x)
{
    int rev = 0, flag = x;
    while (x != 0)
    {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    if (flag == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m;
        printf("Enter a number : ");
        scanf("%d", &m);
        if (my_palindrome(m))
            printf("%d is a palindrome\n", m);
        else
            printf("%d is not a palindrome\n", m);
    }
    return 0;
}
