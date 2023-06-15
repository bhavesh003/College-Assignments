#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  printf("PID of a2.c=%d\n", getpid());
  char *args[] = {"Hello", "C", "Programming", NULL};
  execv("./hello", args);
  printf("Backto a2.c");
  return 0;
}
