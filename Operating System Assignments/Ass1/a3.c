#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int pid;
    printf("hello world (pid:%d)\n", getpid());
    int rc = fork();
    // if (rc < 0)
    // {
    //     printf("fork failed\n");
    //     exit(1);
    // }
    // else if (rc == 0)
    if (rc == 0)
    {
        printf("hello, I am child (pid:%d)\n", getpid());
        // execl("/bin/ls", "/bin/ls", NULL);
        execl("/bin/ls", "ls", NULL);
    }
    else
    {
        sleep(3);
        printf("\nI am parent of %d (pid:%d)\n",rc, getpid());
    }
    return 0;
}
