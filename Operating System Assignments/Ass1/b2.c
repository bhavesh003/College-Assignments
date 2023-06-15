#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  int pid, retnice;
  // printf("Press DEL to stop process\n");
  pid = fork();
  {
    if (pid == 0)
    {
      retnice = nice(-1);
      printf("Chid gets higher priority %d\n", retnice);
      sleep(1);
    }
    else
    {
      retnice = nice(5);
      printf("Parent gets lower priority %d\n\n", retnice);
      sleep(1);
    }
  }
}
