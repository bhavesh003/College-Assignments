#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car
{
    int no;
    char name[20];
    char colour[20];
    int cost;
};

void read_car(struct car *c);
void print_all_cars(struct car **c, int n);
int search_by_name(struct car **c, int n);

int main()
{
    int n;
    printf("Enter the number of Cars to be read: ");
    scanf("%d", &n);
    struct car **c = malloc(n);
    for (int i = 0; i < n; i++)
        c[i] = malloc(sizeof(struct car));
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Fill in the information for %d car.\n", i + 1);
        read_car(c[i]);
        printf("\n");
    }

    printf("\nChoose from the following options and enter there respective no as input\n1)Search by name\n2)Display All\n");
    do
    {
        int op;
        printf("\nEnter your option: ");
        scanf("%d", &op);
        printf("\n");
        switch (op)
        {
        case 1:
            if (search_by_name(c, n))
                printf("Car name found\n");
            else
                printf("Car not found\n");
            break;
        case 2:
            print_all_cars(c, n);
            break;
        case 3:
            return 0;
            break;
        default:
            break;
        }
    } while (1);

    return 0;
}

void read_car(struct car *c)
{
    printf("Enter Car number: ");
    scanf("%d", &(c->no));
    printf("Enter Car name: ");
    scanf("%s", c->name);
    printf("Enter Car colour: ");
    scanf("%s", c->colour);
    printf("Enter Car cost: ");
    scanf("%d", &(c->cost));
}

void print_all_cars(struct car **c, int n)
{
    printf("CarNo.\t\tCar Name\t\tColour\t\t\tcost\n");
    for (int i = 0; i < n; i++)
    {
        printf("%-11d\t", c[i]->no);
        printf("%-20s\t", c[i]->name);
        printf("%-20s\t", c[i]->colour);
        printf("%d\n", c[i]->cost);
    }
}

int search_by_name(struct car **c, int n)
{
    char input[20];
    printf("\nEnter Car name to be searched: ");
    scanf("%s", input);
    for (int i = 0; i < n; i++)
    {
        if ((strcmp(input, c[i]->name)) == 0)
        {
            return 1;
        }
    }
    return 0;
}