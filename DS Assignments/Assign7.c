#include <stdio.h>
#include <stdlib.h>
#include "btree.h"
void main()
{
    struct node *root, *temp;
    int ch, count, val;
    root = NULL;
    while (1)
    {
        printf("\nBinary Search Tree Operations :\n");
        printf("1 - Create BST\n");
        printf("2 - Count Leaf Node\n");
        printf("3 - Count NonLeaf Node\n");
        printf("4 - Count Total Nodes\n");
        printf("5 - Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            while (1)
            {
                printf("\nEnter The data : ");
                scanf("%d", &val);
                if (val == 0)
                    break;
                else
                {
                    root = create(root, val);
                }
            }
            break;
        case 2:
            val = countL(root);
            printf("\nLeaf Nodes In The Tree : %d\n", val);
            break;
        case 3:
            val = countNL(root);
            printf("\nNonLeaf Nodes In The Tree : %d\n", val);
            break;
        case 4:
            val = countAll(root);
            printf("\nTotal Nodes In The Tree Are\t%d\n", val);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}