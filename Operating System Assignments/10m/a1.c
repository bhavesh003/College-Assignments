#include <stdio.h>
#include <unistd.h>
int main()
{
    int pid;
    pid = fork();
    if (pid == 0)
    {
        printf("Hello World, This is Child Process\n");
        printf("Child process id is %d\n", getpid());
    }
    else
    {
        printf("Hii. This is Parent Process\n");
        printf("Parent process id is %d\n", getpid());
    }
    return 0;
}
