#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *country[3] = {"India", "France", "Germany"};
    char *capital[3] = {"Delhi", "Paris", "Berlin"};
    printf("Countries :\n");
    for (int i = 0; i < 3; i++)
    {
        puts(country[i]);
    }
    printf("\nSelect a country from the list : ");
    char input[20];
    scanf("%s", input);
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(input, country[i]) == 0)
        {
            printf("Capital : ");
            puts(capital[i]);
            return 0;
        }
    }
    printf("Invalid country");
    return 0;
}