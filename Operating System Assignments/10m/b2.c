#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    int pid, retnice;
    pid = fork();
    for(;;)
    {
        if (pid == 0)
        {
            retnice = nice(-5);
            printf("Chid gets higher CPU priority %d\n\n", retnice);
            sleep(1);
        }
        else
        {
            retnice = nice(4);
            printf("Parent gets lower CPU priority %d\n", retnice);
            sleep(1);
        }
    }
}
