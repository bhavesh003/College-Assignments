#include <stdio.h>
#include <stdlib.h>

struct item
{
    int number;
    char name[20];
    float rate;
    int qty;
    float total;
};

void read_item(struct item *it);
void print(struct item *it);

int main()
{
    int n;
    float grand_Total = 0;
    printf("Enter the number of items to be read: ");
    scanf("%d", &n);
    struct item **it = calloc(n, sizeof(struct item));
    for (int i = 0; i < n; i++)
        it[i] = malloc(sizeof(struct item));

    for (int i = 0; i < n; i++)
    {
        printf("Fill in the information for %d items.\n", i + 1);
        read_item(it[i]);
        grand_Total += it[i]->total;
        printf("\n");
    }
    printf("Sr.No.\t\tItem Name\tRate\t\tQty\tTotal\n");
    for (int i = 0; i < n; i++)
        print(it[i]);
    printf("\t\t\t\t\t\t\t------\n");
    printf("\t\t\t\t\t  Grand Total = %.2f\n", grand_Total);
    return 0;
}

void read_item(struct item *it)
{
    printf("Enter item no. : ");
    scanf("%d", &(it->number));
    printf("Enter name : ");
    scanf("%s", it->name);
    printf("Enter rate : ");
    scanf("%f", &(it->rate));
    printf("Enter quantity : ");
    scanf("%d", &(it->qty));
    it->total = it->rate * it->qty;
}

void print(struct item *it)
{
    printf("%-11d\t", it->number);
    printf("%-10s\t", it->name);
    printf("%-8d\t", (int)it->rate);
    printf("%-7d\t", it->qty);
    printf("%.2f\n", it->total);
}