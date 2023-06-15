#include <stdio.h>
#define MAX 5
struct queue
{
    int data[MAX];
    int front, rear;
};
void initQ(struct queue *q)
{
    q->front = q->rear = -1;
}
int isEmptyQ(struct queue *q)
{
    if (q->front == q->rear)
        return 1;
    else
        return 0;
}
int isFullQ(struct queue *q)
{
    if (q->rear == MAX - 1)
        return 1;
    else
        return 0;
}
void insertQ(struct queue *q, int x)
{
    q->data[++(q->rear)] = x;
}
int deleteQ(struct queue *q)
{
    return (q->data[++(q->front)]);
}
void display(struct queue *q)
{
    int i;
    printf("\nQueue contents are:\t");
    for (i = q->front + 1; i <= q->rear; i++)
        printf("%d\t", q->data[i]);
}
void main()
{
    struct queue q1;
    int ch, x;
    initQ(&q1);
    do
    {
        printf("\n1-Insert\n2-Delete\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (isFullQ(&q1))
                printf("Queue is Full\n");
            else
            {
                printf("Enter element to be inserted\n");
                scanf("%d", &x);
                insertQ(&q1, x);
                display(&q1);
            }
            break;
        case 2:
            if (isEmptyQ(&q1))
                printf("Queue is Empty\n");
            else
            {
                printf("Deleted element is %d\n", deleteQ(&q1));
                display(&q1);
            }
            break;
        }
    } while (ch > 0 && ch < 3);
}