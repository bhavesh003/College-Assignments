#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
int main()
{
    int pid;
    pid = fork();
    if (pid == 0)
    {
        printf("Child process is running\n ");
        execl("/bin/ls", "ls", NULL);
    }
    else
    {
        sleep(10);
        printf("Parent Process is terminated\n");
    }
    return 0;
}
