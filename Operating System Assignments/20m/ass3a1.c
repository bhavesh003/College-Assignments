#include <stdio.h>
int main()
{
    int process, need;
    int min_resources = 0;
    printf("Enter the no. of process\n");
    scanf("%d", &process);
    printf("Enter the need\n");
    scanf("%d", &need);
    min_resources = process * (need - 1) + 1;
    printf("Minimum no. of resouces to avoid deadlock are Resouces>=%d", min_resources);
    return 0;
}