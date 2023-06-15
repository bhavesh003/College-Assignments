#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
  int pid = fork();
  if (pid > 0)
  {
    printf("Parent process\n");
    printf("ID:%d\n\n", getpid());
  }
  else if (pid == 0)
  {
    printf("Child process\n");
    printf("ID:%d\n\n", getpid());
    printf("Parent-ID:%d\n\n", getppid());
    sleep(10);

    printf("Child process\n");
    printf("ID:%d\n\n", getpid());
    printf("Parent-ID:%d\n\n", getppid());
  }
  else
  {
    printf("Failed to create child process");
  }
  return 0;
}
