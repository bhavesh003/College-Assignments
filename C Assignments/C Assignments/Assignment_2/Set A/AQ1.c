//Accept an integer and display the message as positive number negative number or 0 value depending on value of given number use ternary operator
#include <stdio.h>

int main()
{
    double n;

    printf("Enter a number: ");
    scanf("%lf", &n);
    (n == 0) ? printf("zero") : (n > 0) ? printf("+ve")
                                        : printf("-ve");

    // if (n < 0.0)
    //     printf("Negative Number");
    // else if (n > 0.0)
    //     printf("Positive Number");
    // else
    //     printf("Zero value");

    return 0;
}