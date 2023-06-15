#include <stdio.h>
#include <stdlib.h> 
#include <sys/types.h>
#include <unistd.h>
int main()
{
  
  printf("we are in hello.c\n");
  printf("PID of hello.c =%d\n",getpid());
  return 0;
}
