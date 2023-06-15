#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    printf("PID of a22.c =%d\n", getpid());
    char *argv[] = {"ls", "-l", "-h", "-a", NULL};
    execvp("./hello", argv);
    printf("\back to a22.c\n");
    return 0;
}

// execv -> >   (PATH,ARGUMENTV)
// execvp -> >  (FILE,ARGUMENTV)