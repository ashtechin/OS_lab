#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
int main ()
{
  pid_t child_pid;
  child_pid = fork ();
  if (child_pid > 0) {
      printf("Parent Process\n");
    sleep (100);
  }
  else {
    printf("Child Process\n");
    exit (0);
  }
  return 0;
}
