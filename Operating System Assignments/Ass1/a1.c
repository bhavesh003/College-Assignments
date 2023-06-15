#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  int pid;
  pid = fork();
  if (pid < 0)
  {
    printf("\n Error in creation of Child process");
    exit(1);
  }
  else if (pid == 0)
  {
    printf("\nHello World,I am child process");
    printf("\nchild pid is %d\n", getpid());
    exit(0);
  }
  else
  {
    printf("\nHii,I am the parent process");
    printf("\nParent pid is %d\n", getpid());
    exit(1);
  }
}
