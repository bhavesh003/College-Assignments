#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("hello world (pid:%d)\n", getpid());
    int pid = fork();

    if (pid == 0)
    {
        printf("hello, I am child (pid:%d)\n", getpid());
        execl("/bin/ls", "ls", NULL);
    }
    else
    {
        sleep(3);
        printf("\nI am parent of %d (pid:%d)\n", pid, getpid());
    }
    return 0;
}
