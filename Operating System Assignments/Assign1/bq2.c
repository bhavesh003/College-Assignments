#include <stdio.h>
#include <unistd.h>
main()
{
    int pid;
    int retnice;
    pid = fork();
    if (pid == 0)
    {
        retnice = nice(-1);
        printf("Child process id is %d\n", getpid());
        printf("Priority value is %d\n", retnice);
    }
    else
    {
        retnice = nice(15);
        printf("Child process id is %d\n", getpid());
        printf("Priority value is %d\n", retnice);
    }
    return 0;
}
