#include <stdio.h>
#include <stdlib.h> 
#include <sys/types.h>
#include <unistd.h>
int main()
{
    printf("\nparent program\n");
    printf("PID =%d\n",getpid());
    // char *argv[]={"ls","-l","-h","-a",NULL};
    char *argv[]={NULL};
    // char *file_name=("./hello");
    execvp("./hello",argv);
    printf("\nback to parent program\n");


    //execv -> >   (PATH,ARGUMENTV)
    //execvp -> >  (FILE,ARGUMENTV)

    return 0;
}

