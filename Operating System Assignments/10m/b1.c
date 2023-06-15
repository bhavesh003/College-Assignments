#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  int pid;
  pid = fork();
  if (pid == 0)
  {
    printf("Child process1 %d\n", getpid());
    printf("Parent-ID:%d\n\n", getppid());
    sleep(3);
    printf("\nChild process2 %d\n", getpid());
    printf("Parent-ID:%d\n", getppid());
  }
  else
  {
    printf("Parent process %d\n", getpid());
  }
  return 0;
}