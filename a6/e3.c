#include<unistd.h>
#include<stdlib.h>
int main()
{
    int pid,j;
    i=fork();
    if(pid==0)
        for(j=0;j<10;j++)
         printf(“\nChild Process\n”);
        exit(0);
    }
    else
    {
        for(j=0;j<10;j++)
         printf(“\nParent Process\n”);

    }
   exit(0);
}
