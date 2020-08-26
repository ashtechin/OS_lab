#include<stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
  
int main() 
{ 
    //Q3a
    pid_t pid = fork(); 
  
    if (pid > 0) 
        printf("Parent Process"); 
    else if (pid == 0) 
    { 
        sleep(30); 
        printf("Child process"); 
    } 
  
    return 0; 
}
