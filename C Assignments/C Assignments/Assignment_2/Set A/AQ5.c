#include <stdio.h>

int main()
{
    float salary, tax;

    printf("Enter your salary : Rs ");
    scanf("%f", &salary);

    if (salary < 150000)
    {
        tax = 0;
    }
    else if ((salary >= 150000) && (salary <= 300000))
    {
        tax = salary * ((float)20 / 100);
    }
    else
    {
        tax = salary * ((float)30 / 100);
    }

    printf("You have to paid tax of Rs %.2f", tax);

    return 0;
}