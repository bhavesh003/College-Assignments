#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter X-axis : ");
    scanf("%d", &x);
    printf("Enter Y-axis : ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("The coordinates belong to the 1st Quadrant");
    else if (x < 0 && y > 0)
        printf("The coordinates belong to the 2nd Quadrant");
    else if (x < 0 && y < 0)
        printf("The coordinates belong to the 3rd Quadrant");
    else if (x > 0 && y < 0)
        printf("The coordinates belong to the 4th Quadrant");
    else if (x == 0 && y > 0)
        printf("The coordinates belong to the Positive sided y-axis");
    else if (x == 0 && y < 0)
        printf("The coordinates belong to the Negative sided y-axis");
    else if (x > 0 && y == 0)
        printf("The coordinates belong to the Positive sided x-axis");
    else if (x < 0 && y == 0)
        printf("The coordinates belong to the Negative sided x-axis");
    else if (x == 0 && y == 0)
        printf("The coordinates belong to the Origin");
    else
        printf("Invalid Input");
    return 0;
}